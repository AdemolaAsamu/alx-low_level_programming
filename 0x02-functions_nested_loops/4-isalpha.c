#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 *
 * @c: The variable number for ASCII aphabets
 *
 * Return: (1) if c is a upper/ lower case
 * 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
