#include "main.h"
/**
 * _strpbrk - searches a string for any of the set bytes
 *
 * @s: Input string
 * @accept: Input string
 *
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s != '\0')
	{

		for (k = 0; accept[k]; k++)
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
