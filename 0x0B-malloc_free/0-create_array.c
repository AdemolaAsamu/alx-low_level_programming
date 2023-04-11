#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - Function creates a dynamic array
 *
 * @size: this is the input size of array
 * @c: the character input
 *
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	char *A;
	unsigned int i;

	A = malloc(size * sizeof(char));
	if (size == 0 || A == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		A[i] = c;
	}
	return (A);
}
