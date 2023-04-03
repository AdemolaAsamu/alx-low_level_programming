#include "main.h"
/**
 * _strchr - this function locates a character in a string
 *
 * @s: A pointer to the null-terminated string to search
 * @c: The Character to search for
 *
 * Return: s, 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
