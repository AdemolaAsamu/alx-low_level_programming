#include "main.h"
/**
 * print_binary - fxn prints the binary rep of a nnumber
 * @n: input integer
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask;
	int k, flag;

	mask = 1;
	flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (k = 63; k >= 0; k--)
	{
		if ((n >> k) & mask)
		{
			_putchar('1');
			flag = 1;
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
}
