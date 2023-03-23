#include "main.h"
/**
 * print_line - this function prints a straight line
 *
 * @n: this determines the lenght of the line
 *
 */
void print_line(int n)
{
	int k, i;

	k = 95;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}
}
