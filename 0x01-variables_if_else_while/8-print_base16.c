#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Description: The program that prints
 * Hexadecimal characters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	/*This is the statement to bring the hexadecimal*/
	unsigned char a;

	for (a = 0 ; a < 16 ; a++)
	{
		printf("%x", a);
	}
	printf("\n");
	return (0);
}
