#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - main entry function
 * @array: input array
 * @size: input size
 * @cmp: function pointer
 * Return: first element, -1 in error 0 not returned
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
