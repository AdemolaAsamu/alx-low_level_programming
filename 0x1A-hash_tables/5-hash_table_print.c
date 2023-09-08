#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: IT is the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int idx;
	char *pause = "";

	if (ht == NULL || !ht->array)
		return;
	printf("{");
	for (idx = 0; idx < (int) ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			printf("%s '%s': '%s'", pause, node->key, node->value);
			pause = ", ";
			node = node->next;
		}
	}
	printf("}");
	printf("\n");
}
