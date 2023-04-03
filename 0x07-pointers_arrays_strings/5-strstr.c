#include "main.h"
/**
 * _strtsr - function that locates a substring
 *
 * @haystack: input
 * @needle: input
 *
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *w = needle;
		char *v = haystack;

		while (*v == *w && *w != '\0')
		{
			v++;
			w++;
		}
		if (*w == '\0')
		{
			return (haystack);
		}
	}
	return (0);
}
