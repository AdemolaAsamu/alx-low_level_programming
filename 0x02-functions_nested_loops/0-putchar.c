#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry
 *
 * Description:This program 0-putchar.c
 * prints the _putchar and returns 0
 *
 * Return: 0 (Success)
 */
int main(void)
{
	/*Declaration of variables int and array holding putchar_*/
	char val[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(val[i]);
	}
	putchar('\n');
	return (0);
}
