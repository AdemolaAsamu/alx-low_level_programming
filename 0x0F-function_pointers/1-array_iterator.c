#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Entry main function
 * @array: Input array
 * @size: input size
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
