#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Description: The program prints out the
 * alphabets in lower case, doesnt allow printf or puts
 * strictly uses putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/* The for Statement loop to print A - Z */
	int i;
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		/* This is a break statement that is passed i=4/16*/
		if (i == 4)
		{
			continue;
		}
		if (i == 16)
		{
			continue;
		}
		putchar(alphabet[i]);
	}

	putchar('\n');
	return (0);
}
