#include <stdio.h>
#include "main.h"
/**
 * main - Entry to print the arguments of a program
 *
 * @argc: This is the number of arguments
 * @argv: This is the pointer to arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int base;

	base = argc - 1;
	printf("%d\n", base);
	return (0);
}
