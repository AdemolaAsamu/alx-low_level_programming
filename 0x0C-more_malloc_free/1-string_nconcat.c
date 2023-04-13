#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * my_strlen - compute the length of a string
 *
 * @s: string to compute the lenght of
 *
 * Return: lenght of the string
 */
int my_strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * memcpy - main function entry
 *
 * @dest: input variable
 * @src: input variable
 * @n: input unsigned
 * Return: this gives dest
 */
void *my_memcpy(void *dest, void *src, unsigned int n)
{
	char *d = (char*)dest;

	char *s = (char*)src;

	while (n--)
		*d++ = *s++;
	return (dest);
}
/**
 * string_nconcat - takes to string pointers
 *
 * @s1: first input string
 * @s2: second input string
 * @n: input integer
 *
 * Return: result is gotten
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *result;

	len1 = 0;
	len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = my_strlen(s1);
	len2 = my_strlen(s2);

	if (n >= len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (result == NULL)
		return (NULL);
	my_memcpy(result, s1, len1);
	my_memcpy(result + len1, s2, n);
	result[len1 + n] = '\0';

	return (result);
}
