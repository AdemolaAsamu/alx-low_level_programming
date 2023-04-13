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
	unsigned int i;
	char *p;
	char *np;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size < old_size)
		old_size = new_size;

	p = ptr;
	np = new_ptr;

	for (i = 0; i < old_size; i++)
		np[i] = p[i];

	free(ptr);

	return (new_ptr);
}
