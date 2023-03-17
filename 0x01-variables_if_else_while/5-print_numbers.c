#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: The program prints out the
 * alphabets in Upper and lower case, doesnt allow printf or puts
 * strictly uses putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* The for Statement loop to print A - Z */
	int i;

	for (i = 0 ; i < 26 ; i++)
	{
		printf("%d\n", i);

	}
	printf("\n");
	return (0);
}
