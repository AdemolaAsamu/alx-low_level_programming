#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry function with arg
 *
 * @argc: count of arg
 * @argv: pointer to array of arg
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 1; i < argc; i++)
	{
		char *endptr;
		long value;

		value = strtol(argv[i], &endptr, 10);
		if (*endptr != '\0' || value < 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += (int)value;
	}
	printf("%d\n", sum);
	return (0);
}
