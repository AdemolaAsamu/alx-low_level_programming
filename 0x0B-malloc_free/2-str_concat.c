#include "main.h"
/**
 * str_concat - function that concatenates strings
 *
 * @s1: string 1 input
 * @s2: string 2 input
 *
 * Return: joint
 */
char *str_concat(char *s1, char *s2)
{
	char *joint;
	int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
	{

	}
	for (j = 0; s2[j] != '\0'; j++)
	{

	}
	joint = malloc((j + i + 1) * sizeof(char));

	if (joint == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		joint[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		joint[i] = s2[j];
		i++;
	}
	joint[i] = '\0';
	return (joint);
}
