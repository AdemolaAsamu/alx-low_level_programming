#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry Point
 *
 * Description: The prgram that generates number from
 * 0 to 9 using the putchar()
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	for (i = 48 ; i < 58 ; i++)
	{
		putchar(i);

		if (i == 57)
		{
			break;
		}
		putchar(',');
	}
	putchar('\n');
	return (0);
}
