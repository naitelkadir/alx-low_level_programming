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
	int fp, count;
	char *b = malloc(sizeof(char *) * letters);
	
	if (filename == NULL)
	{
		return (0);
	}
	if (b == NULL)
	{
		return (0);
	}
	fp = open(filename, O_RDONLY, 0600);
	if (fp == -1)
	{
		return (0);
	}
	count = read(fp, b, letters);
	write(STDOUT-FILENO, b, count);
	close(fp);
	return (count);
}
