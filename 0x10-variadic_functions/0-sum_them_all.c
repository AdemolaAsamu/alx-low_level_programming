#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Main entry function
 * @n: input int parameter
 * @...: input variable number of parameters
 * Return: if n == 0 give 0 else - sum of all param
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list all;
	unsigned int i;
	int sum;

	va_start(all, n);

	sum = 0;
	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(all, int);
	}
	va_end(all);
	return (sum);
}
