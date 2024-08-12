
#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUFFER_SIZE 1024
/**
 * print_usage_error - Prints usage error message and exits with code 97.
 */

void print_usage_error(void)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
/**
 * print_read_error - Prints read error message and exits with code 98.
 * @filename: Name of the file that caused the error.
 */

void print_read_error(const char *filename)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}

/**
 * print_write_error - Prints write error message and exits with code 99.
 * @filename: Name of the file that caused the error.
 */
void print_write_error(const char *filename)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
/**
 * print_close_error - Prints close error message and exits with code 100.
 * @fd: File descriptor that could not be closed.
 */

void print_close_error(int fd)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
/**
 * main - Copies the content of a file to another file.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, exits with code on failure.
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;
ssize_t bytes_read, bytes_written;
if (argc != 3)
{
print_usage_error();
}
fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
print_read_error(argv[1]);
}
fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
close(fd_from);
print_write_error(argv[2]);
}
while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
close(fd_from);
close(fd_to);
print_write_error(argv[2]);
}
}
if (bytes_read == -1)
{
print_read_error(argv[1]);
}
if (close(fd_from) == -1)
{
print_close_error(fd_from);
}
if (close(fd_to) == -1)
{
print_close_error(fd_to);
}
return (0);
}
