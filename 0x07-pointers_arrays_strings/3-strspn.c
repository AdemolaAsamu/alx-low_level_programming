#include "main.h"
/**
 * _strspn - function that gets the length
 * of a prefix substring
 *
 * @s:A pointer to the string to be searched
 * @accept: A pointer to a string of char to be used
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, len;

	len = strlen(accept);

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < len; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
		}
		if (j == len)
		{
			return (count);
		}
	}
	return (count);
}
