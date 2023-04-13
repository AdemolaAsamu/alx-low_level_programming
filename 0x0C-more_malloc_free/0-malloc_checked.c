#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - Calls to allocate memory
 *
 * @b: input value
 *
 * Return: the function returns ptr
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}
	return (ptr);
}
