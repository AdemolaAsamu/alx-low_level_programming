#include "main.h"
#include <stdio.h>
/**
 * main - Entry program that prints its name
 *
 * @argc: This is the first line execution
 * @argv: arrays of command prompt
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	/*char *name = argv[0];

	while (*name)
	{
		_putchar(*name++);
	}
	_putchar('\n');*/
	printf("%s\n", *argv);
	return (0);
}

