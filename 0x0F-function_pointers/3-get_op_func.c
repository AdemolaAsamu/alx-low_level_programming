#include "3-calc.h"
#include "function_pointers.h"
#include <string.h>
/**
 * get_op_func - Input main entry funciton to perform operation
 * @s: input character
 * Return: pointer to function address that works
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i])
	{
		if (strcmp(ops[i]->op, s) == 0)
			break;
		i++;
	}
	return (ops[i]->f);
}
