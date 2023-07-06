#include "main.h"
/**
 * _putchar - writes the character c to the stdout
 * @c: The character to print
 * Return: 1 for success.
 * On error, -1 is returned, and errno is well set.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
