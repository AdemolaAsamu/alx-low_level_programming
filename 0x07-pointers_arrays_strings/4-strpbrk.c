#include "main.h"
/**
 * _strpbrk - searches a string for any of the set bytes
 *
 * @s: Input string
 * @accept: Output tring
 *
 * Return: p, 0
 */
char *_strpbrk(char *s, char *accept)
{
	char *p = s;

	while (*p != '\0')
	{
		char *q = accept;

		while (*q != '\0')
		{
			if (*p == *q)
			{
				return (p);
			}
			q++;
		}
		p++
	}
	return (0);
}
