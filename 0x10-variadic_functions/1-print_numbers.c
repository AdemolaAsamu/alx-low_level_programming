#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - Main entry function
 * @separator: input to function
 * @n: input integer
 * @...: other variable input
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list values;
	unsigned int i;

	va_start(values, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(values, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(values);
}
