#include "main.h"
/**
 * get_str_len - this function gets the length
 * of the string
 *
 * @s: the string input
 *
 * Return: 0
 */
int get_str_len(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * is_palindrome_helper - this function helps the palindrome
 *
 * @s: input string searched
 * @start: the beginging of string
 * @end: the end of the string
 *
 * Return: 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] == s[end])
	{
		return (is_palindrome_helper(s, start + 1, end - 1));
	}
	else
	{
		return (0);
	}
}
/**
 * is_palindrome - fxn checks string it palindrome
 *
 * @s: pointer to string
 * Return: 0
 */
int is_palindrome(char *s)
{
	int len = get_str_len(s);

	return (is_palindrome_helper(s, 0, len - 1));
}
