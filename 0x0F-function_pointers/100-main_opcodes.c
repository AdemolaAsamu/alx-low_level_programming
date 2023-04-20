#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - main print function for opcodes
 * @argc: the length of argv
 * @argv: array
 * Return: 0, exit and sets status otherwise
 */
int main(int argc, char **argv)
{
	int bytes;
	char *f = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	bytes = atoi(argv[1]);
	if (bytes <= 0)
	{
		printf("Error\n");
		exit(2);
	}

	while (bytes > 0)
	{
		bytes--;
		printf("%02hhx", *f);
		if (bytes - 1)
			printf(" ");
		f++;
	}
	printf("\n");
}
