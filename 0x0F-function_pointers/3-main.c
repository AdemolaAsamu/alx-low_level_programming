#include "function_pointers.h"
#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - Entry function main
 * @argc: lenght of array
 * @argv: array of arguments
 * Return: 0 always success, exits with 98 for failure
 */
int main(int argc, char **argv)
{
	char *op;
	int a, b;

	if (argc != 4) exit(98);

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	op = argv[2];

	if (!(*op == '+' || *op == '-' || *op == '*' || *op == '/' || *op == '%'))
		exit(99);
	if ((*op == '/' || *op == '%') && b == 0)
		exit(100);
	printf("%d\n", get_op_func(op)(a, b));

	return (0);
}
