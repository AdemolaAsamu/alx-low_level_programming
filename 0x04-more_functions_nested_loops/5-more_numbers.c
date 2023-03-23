#include "main.h"
/**
 * more_numbers - print more numbers
 */
void more_numbers(void)
{
	int j;
	int i;

	for (j = 1; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			if (j >= 10)
			{
				_putchar((i / 10) + 48);
				_putchar((i % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
