#include "main.h"
/**
 * create_file - main entry fucntion that creates file
 * @filename: pointer to filename
 * @text_content: pointer to content to write
 * Return: 1 success -1 fail
 */
int create_file(const char *filename, char *text_content)
{
	FILE *fp;
	int len_content, len_write;

	if (filename == NULL)
		return (-1);

	fp = fopen(filename, "w");
	if (fp == NULL)
		return (-1);

	if (text_content == NULL)
		len_content = 0;
	else
		len_content = strlen(text_content);

	len_write = fwrite(text_content, sizeof(char), len_content, fp);
	if (len_write != len_content)
	{
		fclose(fp);
		return (-1);
	}
	if (fchmod(fileno(fp), S_IRUSR | S_IWUSR) == -1)
	{
		fclose(fp);
		return (-1);
	}
	fclose(fp);

	return (1);
}
