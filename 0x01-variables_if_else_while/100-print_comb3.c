#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints
 * Combination of numbers below 100
 * in accending order, no repeading number
 * 03 == 30 therefore doesnt work
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* The declaration of variables */
	int i, j;

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != 56 || j != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
