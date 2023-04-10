#include "main.h"

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 *Return: ...
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t count, fpwrite;
	char *b;
	
	if (filename == NULL)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		return (-1);
	}
	fp = open(filename, O_RDONLY);
	if (fp == -1)
	{
		return (0);
	}
	count = read(fp, b, letters);
	if (count == -1)
	{
		return (-1);
	}
	fpwrite = write(STDOUT_FILENO, b, count);
	if (fpwrite == -1)
	{
		return (-1);
	}
	free(b);
	close(fp);
	return (count);
}
