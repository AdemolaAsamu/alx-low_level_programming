#include "main.h"
/**
 * print_times_table - This function prints n tables
 *
 * To handle the manipulation in function
 *
 * @n: integer to be recived to limit level of return
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int i;
	int j;
	int p;

	if (n >= 0 || n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				p = i * j;

				if (j == 0)
				{
					_putchar(p + '0');
				}
				if (p < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
