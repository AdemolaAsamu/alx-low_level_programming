#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length
 * @s: input search string pointer
 * @accept: input pointer to string
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n;
	int k;

	n = 0;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}
	return (n);
}
