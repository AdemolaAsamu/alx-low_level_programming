#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * my_memset - this serves as a function
 *
 * @s: input
 * @c: input
 * @n: input
 * Return: this gives s back
 */
void *my_memset(void *s, int c, unsigned int n)
{
	unsigned char *p = (unsigned char *)s;

	while (n--)
		*p++ = (unsigned char)c;

	return (s);
}
/**
 * _calloc - main entry funtion
 *
 * @nmemb: input variable
 * @size: input variable
 * Return: this gives back ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	my_memset(ptr, 0, nmemb * size);
	return (ptr);
}
