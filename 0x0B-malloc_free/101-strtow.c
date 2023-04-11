#include "main.h"
#include <stdlib.h>
/**
 * my_strlen - compute the length of a string
 *
 * @s: string to compute the lenght of
 *
 * Return: lenght of the string
 */
int my_strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/**
 * my_strncpy - sopy a string up to a given length
 *
 * @dest: buffer to copy the string to
 * @src: string o copy from
 * @n: maximum number of characters to copy
 *
 * Return: a pointer to the destination buffer
 */
void my_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
}
/**
 * strtow - function splits a string ino two words
 *
 * @str: input string to split
 *
 * Result: 0
 */
char **strtow(char *str)
{
	char **matrix;
	char *word;
	int i, l, k, len, j, words, word_len;

	len = my_strlen(str);
	words = 0;

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			words++;
		}
	}
	if (words == 0)
		return (NULL);

	matrix = malloc((words + 1) * sizeof(char *));
	if (matrix == NULL)
		return (NULL);
	for (i = 0, k = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (j < len && str[j] != ' ')
			{
				j++;
			}
			word_len = j - i;
			word = malloc(word_len + 1);

			if (word == NULL)
			{
				for (l = 0; l < k; l++)
					free(matrix[l]);
				free(matrix);
				return (NULL);
			}
			my_strncpy(word, &str[i], word_len);
			word[word_len] = '\0';
			matrix[k++] = word;
			i = j;
		}
	}
	matrix[k] = NULL;
	return (matrix);
}
