#include "main.h"
/**
 * _memcpy - function that copies n bytes from
 * memory area src to memory area dest
 * @dest: A pointer to destination memory area
 * @src: source copy pointer where data is copied
 * @n: The number of bytes to be copied
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
