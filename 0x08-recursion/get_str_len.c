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
