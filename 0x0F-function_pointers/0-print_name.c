#include "function_pointers.h"
#include <stddef.h>
/**
 * print_name - main function entry point
 * @name: Input
 * @f: input function
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
