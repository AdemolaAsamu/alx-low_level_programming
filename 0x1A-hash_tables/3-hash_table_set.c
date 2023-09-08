#include "hash_tables.h"
/**
 * hash_table_set - Adds an element to HT
 * @ht: HT to be mutated
 * @key: key to the HT
 * @value: value stored in key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *cpy_val;
	hash_node_t *buffer;
	int idx, j;

	if (ht == NULL || value == NULL || key == NULL || *key == '\0')
		return (0);
	if (strdup(value) == NULL)
		return (0);
	buffer = malloc(sizeof(hash_node_t));
	cpy_val = strdup(value);
	idx = key_index((const unsigned char *)key, ht->size);
	for (j = idx; ht->array[j]; j++)
	{
		if (strcmp(ht->array[j]->key, key) == 0)
		{
			free(ht->array[j]->value);
			ht->array[j]->value = cpy_val;
			return (1);
		}
	}
	if (buffer == NULL)
	{
		free(cpy_val);
		return (0);
	}
	buffer->key = strdup(key);
	if (buffer->key == NULL)
	{
		free(buffer);
		return (0);
	}
	buffer->value = cpy_val;
	buffer->next = ht->array[idx];
	ht->array[idx] = buffer;

	return (1);
}
