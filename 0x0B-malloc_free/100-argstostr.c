#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr- converts args to string
 *
 * @ac: input find
 * @av: pointer to in
 *
 * Return: 0
 */
char *argstostr(int ac, char **av)
{
	int i, n, j, l;
	char *result;

	l = 0;
	j = 0;
	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;
	result = malloc(sizeof(char) * l + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			result[j] = av[i][n];
			j++;
		}
		if (result[j] == '\0')
		{
			result[j++] = '\n';
		}
	}
	return (result);


}
