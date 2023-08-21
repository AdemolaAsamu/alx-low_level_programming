#include "main.h"
/**
 * _isdigit - This function checks if an
 * integer is a digit or not
 * @c: integer variable
 *
 * Return: 1 if c is a digit, 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
