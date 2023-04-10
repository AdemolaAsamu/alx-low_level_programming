#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry function with arg
 *
 * @argc: count of arg
 * @argv: pointer to array of arg
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	long long product;

	if (argc > 1)
	{
		product = atoll(argv[1]) * atoll(argv[2]);
		printf("%lld\n", product);
	}
	else
	{
		printf("Error\n");
	}

	return (0);
}
