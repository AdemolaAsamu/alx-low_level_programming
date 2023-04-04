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
	int i, j, accept_len = 0;

	while (accept[accept_len] != '\0')
	{
		accept_len++;
	}

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == accept_len)
		{
			return (count);
		}
	return (count);
}
