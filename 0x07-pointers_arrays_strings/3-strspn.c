#include "main.h"
/**
 * _strspn - function that gets the length
 * @s: input search string
 * @accept: input pointer to string
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				count++;
				break;
			}
			else if (accept[k + 1] == '\0')
			{
				return (count);
			}
		}
		s++;
	}
	return (count);
}
