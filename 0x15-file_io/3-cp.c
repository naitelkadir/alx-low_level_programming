#include "main.h"

/**
 * main - ...
 * @argc: ...
 * @argv: ...
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to, fd_read;
char b[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
fd_to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
while ((fd_read = read(fd_from, b, 1024)) > 0)
{
if (write(fd_to, b, fd_read) != fd_read || fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (fd_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error:Can't close fd %d\n", fd_to);
exit(100);
}
exit(0);
}
