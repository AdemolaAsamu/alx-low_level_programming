#include "main.h"
/**
 * _strpbrk - searches a string for any of the set bytes
 *
 * @s: Input string
 * @accept: Input string
 *
 * Return: p, 0
 */
char *_strpbrk(char *s, char *accept)
{

	while (*s != '\0')
	{
		char *q = accept;

		for (int k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				return (s);
			}
		}
		s++
	}
	return (0);
}
