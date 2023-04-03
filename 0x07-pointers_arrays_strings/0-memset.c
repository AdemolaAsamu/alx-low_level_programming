#include "main.h"
/**
 * _memset - This function replaces the first n bytes
 * of the memory area pointed to by s with the constant
 * byte b
 * @s: A pointer to the memory area to be filled
 * @b: the constant byte to fill the memory area with
 * @n: The number of bytes to fill with the constant byte
 *
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
