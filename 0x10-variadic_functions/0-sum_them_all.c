#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - Main entry function
 * @n: input int parameter
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, sum = 0;

	va_start(all, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(all, int);
	}
	va_end(all);
	return (sum);
}
