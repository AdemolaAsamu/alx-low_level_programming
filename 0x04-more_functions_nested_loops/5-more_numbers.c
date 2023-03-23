#include "main.h"
/**
 * more_numbers - function that prints 1 through 14
 * in 10 places, while using putchar
 *
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		_putchar('\n');
	}
}
