#include "main.h"
/**
 * _isupper - Shows 1 if the input is a
 * upper case character. other cases shows
 * 0
 *
 * @c: character is in ASCII code
 *
 * Return: 1 for uppercase. 0 for the rest
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
