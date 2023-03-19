#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Description: the script that creates
 * multiple number scenerios such as
 * 00 01, 00 02, 07 12
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*declaration of variables*/
	int i, j, k, l;

	/*The for loop to be used to control the inputs*/

	for (i = 48 ; i < 58 ; i++)
	{
		for (j = 48 ; j < 58 ; j++)
		{
			for (k = 48 ; k < 58 ; k++)
			{
				for (l = 49 ; l < 58 ; l++)
				{
					if (l > j)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(l);
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
	putchar('\n');
}
