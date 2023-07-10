#include "main.h"
size_t copy_file(FILE *ffile, FILE *tfile);
/**
 * main - main entry function that transfers
 * contents of a file to another
 * @argc: this counts the number of input arg
 * @file: pointer to array of the argument
 * Return: 0 success, otherwise fail
 */
int main(int argc, char *file[])
{
	FILE *ffile, *tfile;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffile = fopen(file[1], "r");
	if (ffile == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file[1]);
		exit(98);
	}
	tfile = fopen(file[2], "w");
	if (tfile == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file[2]);
		fclose(ffile);
		exit(99);
	}
	if (!copy_file(ffile, tfile))
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file[2]);
		fclose(ffile);
		fclose(tfile);
		exit(99);
	}
	if (ferror(ffile))
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file[1]);
		fclose(ffile);
		fclose(tfile);
		exit(98);
	}
	if (fclose(ffile) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file[1]);
		exit(100);
	}
	if (fclose(tfile) == EOF)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file %s\n", file[2]);
		exit(100);
	}
	return (0);
}
/**
 * copy_file - main entry for the copy file
 * @ffile: pointer to file to copy
 * @tfile: pointer to the destination file
 * Return: 1 success, otherwise fail
 */
size_t copy_file(FILE *ffile, FILE *tfile)
{
	char buffer[BUFFER_SIZE];
	size_t rlen, wlen;

	while ((rlen = fread(buffer, sizeof(char), BUFFER_SIZE, ffile)) > 0)
	{
		wlen = fwrite(buffer, sizeof(char), rlen, tfile);
		if (wlen != rlen)
		{
			return (0);
		}
	}
	if (ferror(ffile))
	{
		return (0);
	}
	return (1);
}
