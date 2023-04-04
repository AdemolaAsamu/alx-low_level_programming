#include "main.h"

/**
 * _strspn - function that gets the length
 * @s: input search string 
 * @accept: string containing character list
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, k, check;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		check = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if(s[i] == accept[j])
			{
				k++;
				check = 1;
			}
		}
		if (check == 0)
		{
			return (k);
		}
	}
	return (0);
}
