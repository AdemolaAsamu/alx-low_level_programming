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
	int i, j;

	/*The for loop to be used to control the inputs*/

	for (i = 0 ; i < 100 ; i++)
	{
		for (j = 0 ; j < 100 ; j++)
		{
			if (l >= j)
			{
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);

				if (i != 98 || j != 99)
				{

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
	putchar('\n');
}
