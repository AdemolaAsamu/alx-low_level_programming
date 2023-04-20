#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Main entry function
 * @n: input int parameter
 * @...: input variable number of parameters
 * Return: void
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i, sum;

	va_start(all, n);

	sum = 0;

	for (i = 0; i < n; i++)
	{
		sum += va_arg(all, int);
	}
	va_end(all);
	return (sum);
}
