#include "hash_tables.h"
/**
 * key_index - Function that gives index of a key
 * @key: Is the key
 * @size: this is the size of the hash table arrays
 * Return: The index of storage
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int idx;

	if (key == NULL || size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size)
}
