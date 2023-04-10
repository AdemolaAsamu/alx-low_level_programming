#include "main.h"
#include <stdio.h>
/**
 * main - this function prints the arguement
 * on command line
 *
 * @argc: this is the count value
 * @argv: This is the value of the array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
