#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file to append
 * @text_content: content to add
 * Return: 1 success, -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fp;
	int len;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "a");
	if (fp == NULL)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
	}

	if (text_content == NULL)
	{
		fclose(fp);
		return (-1);
	}

	if ((int)fwrite(text_content, sizeof(char), len, fp) != (int)len)
	{
		fclose(fp);
		return (-1);
	}
	fclose(fp);
	return (1);
}
