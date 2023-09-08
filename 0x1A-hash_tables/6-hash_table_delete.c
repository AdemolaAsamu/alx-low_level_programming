#include "hash_tables.h"
/**
 * hash_table_delete - delete from HT
 * @ht: The HT to delete from
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *buffer;
	hash_table_t *head = ht;
	unsigned long int idx;

	for (idx = 0; idx < ht->size; idx++)
	{
		if (ht->array[idx] != NULL)
		{
			node = ht->array[idx];
			while (node != NULL)
			{
				buffer = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = buffer;
			}
		}
	}
	free(head->array);
	free(head);
}
