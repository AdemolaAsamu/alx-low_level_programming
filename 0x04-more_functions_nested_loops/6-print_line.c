#include "main.h"
/**
 * print_line - this function prints a straight line
 *
 * @n: this determines the lenght of the line
 *
 * Returns: 0 (Success)
 */
void print_line(int n)
{
	int k, i;

	k = 95;

	for (i = 0; i < n; i++)
	{
		if (n > 0)
		{
			_putchar(k);
		}
	}
	_putchar('\n');
	return (0);
}
