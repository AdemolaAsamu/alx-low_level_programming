#include "hash_tables.h"
/**
 * hash_table_get - Function retrieves from HT
 * @ht: HT to be retrieved from
 * @key: this is the key handler
 * Return: value on success or NULL if void
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	if (idx >= ht->size)
		return (NULL);
	node = ht->array[idx];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
