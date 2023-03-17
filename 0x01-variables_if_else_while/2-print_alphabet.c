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
	for (int x = 'A' ; x <= 'Z' ; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);

	}
	putchar('\n');
	return (0);
}
