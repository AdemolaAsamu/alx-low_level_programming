#include "main.h"
/**
 * read_textfile - Function that reads a text file
 * then prints to the standard output
 * @filename: this is pointer to the file
 * @letters: this is the lenght of total printed output
 * Return: 0 if error, fails to open, unreadable, letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fd;
	char *holder;
	ssize_t len_read, len_write, i;

	if (filename == NULL)
		return (0);
	fd = fopen(filename, "r");

	if (fd == NULL)
		return (0);
	holder = malloc(sizeof(char) * (letters + 1));

	if (holder == NULL || holder[0] == '\0')
	{
		fclose(fd);
		return (0);
	}
	for (i = 0; i < len_read; i++)
		_putchar(holder[i]);
	len_read = fread(holder, sizeof(char), letters, fd);
	if (len_read == 0)
	{
		fclose(fd);
		free(holder);
		return (0);
	}
	len_write = fwrite(holder, sizeof(char), len_read, stdout);
	if (len_write != len_read)
	{
		free(holder);
		fclose(fd);
		return (0);
	}

	fclose(fd);
	free(holder);

	return (len_read);
}
