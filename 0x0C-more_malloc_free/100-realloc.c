#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc - main entry function
 *
 * @ptr: input
 * @old_size: input var
 * @new_size: input size
 * Return: returns the new ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int copy_int;
	char *old_ptr;
	char *new_ptr_c;
	unsigned int i;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	copy_size = (old_size < new_size) ? old_size : new_size;
	old_ptr = ptr;
	new_ptr_c = new_ptr;

	for (i = 0; i < copy_size; i++)
		*(new_ptr_c + i) = *(old_ptr + i);

	free(ptr);

	return (new_ptr);
}
