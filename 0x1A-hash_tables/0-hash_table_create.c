#include "hash_tables.h"
/**
 * hash_table_create - Function that points to create an
 * array of hash tables
 * @size: The size of the hash table array
 * Return: pointer to the newly created hash table otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create_table;
	unsigned long int idx;

	create_table = malloc(sizeof(hash_table_t));

	if (create_table == NULL)
	{
		return (NULL);
	}

	create_table->size = size;
	create_table->array = malloc(sizeof(hash_node_t *) * size);
	if (create_table->array == NULL)
	{
		free(create_table);
		return (NULL);
	}
	for (idx = 0; idx < size; idx++)
		create_table->array[idx] = NULL;
	return (create_table);
}
