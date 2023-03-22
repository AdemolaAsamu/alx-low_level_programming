#include "main.h"
/**
 * print_times_table - Entry point
 *
 * print_times_table: This program executes bla
 * @n: integer for the last level function
 *
 * put_100: To handle the manipulation in function
 * @p: integer to be received for fxt put_100
 *
 * Return: no return
 */
void put_100(int p)
{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	_putchar((p / 100) + '0');
	_putchar(((p % 100) / 10) + '0');
	_putchar((p % 10) + '0');
}

void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;
				if (j == 0)
					_putchar(p + '0');
				if (p < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p >= 10 && p < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p >= 100)
				{
					put_100(p);
				}
			}
			_putchar('\n');
		}
	}
}
