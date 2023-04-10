#include "main.h"

/**
 * main - ...
 *
 * Return: Always 0.
 */
int main(int argc,char *argv[])
{
	int fd_from, fd_to, fd_write, fd_read;
	char *b;
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprinttf(STDERR_FILENO,"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_TRUNC | O_CREAT | O_WRONLY);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}
	for (i = 0; i < 1024, i++)
	{
	fd_read = read(fd_from, b, 1024);
	if (fd_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fd_write = write(fd_to, b, fd_read);
	if (fd_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s", av[2]);
		exit(99);
	}
	}
	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
