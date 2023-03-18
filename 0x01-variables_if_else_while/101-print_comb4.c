#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Description: This is a program that prints
 * Conbination of non repeating numbers below 1000
 * in ascending order, no repeating number
 * 012 210 201 therefore doesnt work
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* The declaration of variables */
	int i, j, k;

	/* creating the for loops for sorting the variables */
	/* This is close of a UTM */

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 49 ; j < 58 ; j++)
		{
			for (k = 50 ; k < 58 ; k++)
			{
				if (j > i && k > i && k > j)
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i != 55 || j != 56 || k != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
