#include "main.h"
/**
 * _strspn - function that gets the length
 * of a prefix substring
 *
 * @s: input search string
 * @accept: input pointer to string
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int accept_chars[256] = {0};

	while (*accept != '\0')
	{
		accept_chars[(int) *accept] = 1;
		accept++;
	}

	while (*s != '\0' && accept_chars[(int) *s])
	{
		count++;
		s++;
	}
	return (count);
}
