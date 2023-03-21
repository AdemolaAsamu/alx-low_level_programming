#include "main.h"
/**
 * times_table - This function prints 9 tables
 *
 * @variable: To handle the manipulation in function
 *
 * Return: no return
 */
void times_table(void)
{
	int n, m, p;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			p = n*m;

			_putchar(p);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
