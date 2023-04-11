#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - creates a duplicate of input string
 *
 * @str: input string
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	dup = malloc((i + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (j = 0; str[j]; j++)
	{
		dup[j] = str[j];
	}
	return (dup);
}
