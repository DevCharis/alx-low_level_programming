#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

#define BUF_SIZE 1024

void check_arguments(int argc);
int open_file_for_reading(const char *filename);
int open_file_for_writing(const char *filename);
void copy_content(int fd_from, int fd_to);
void close_file(int fd);

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

check_arguments(argc);

fd_from = open_file_for_reading(argv[1]);
fd_to = open_file_for_writing(argv[2]);

copy_content(fd_from, fd_to);

close_file(fd_from);
close_file(fd_to);

return (0);
}


/**
 * check_arguments - Checks if the number of arguments is correct.
 * @argc: Number of arguments.
 *
 * If argc is not 3, prints the usage message and exits with code 97.
 */
void check_arguments(int argc)
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
}

/**
 * open_file_for_reading - Opens a file for reading.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor of the opened file.
 *         Exits with code 98 if the file cannot be read.
 */
int open_file_for_reading(const char *filename)
{
int fd = open(filename, O_RDONLY);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
exit(98);
}
return (fd);
}


/**
 * open_file_for_writing - Opens a file for writing.
 * @filename: The name of the file to open.
 *
 * Return: The file descriptor of the opened file.
 *         Exits with code 99 if the file cannot be written to.
 */int open_file_for_writing(const char *filename)
{
int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
exit(99);
}
return (fd);
}

/**
 * copy_content - Copies the content from one file descriptor to another.
 * @fd_from: The file descriptor to read from.
 * @fd_to: The file descriptor to write to.
 *
 * Reads from fd_from and writes to fd_to in chunks of BUF_SIZE bytes.
 * Exits with code 99 if writing fails or with code 98 if reading fails.
 */
void copy_content(int fd_from, int fd_to)
{
ssize_t bytes_read, bytes_written;
char buffer[BUF_SIZE];

while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", buffer);
close(fd_from);
close(fd_to);
exit(99);
}
}

if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file\n");
exit(98);
}
}
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 *
 * Exits with code 100 if closing the file descriptor fails.
 */


void close_file(int fd)
{
if (close(fd) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
exit(100);
}
}

