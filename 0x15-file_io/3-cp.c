#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUF_SIZE 1024
/**
 * print_error - Prints an error message to stderr and returns
 *
 * @error_msg: the error message to display
 * @exit_status: the exit status to return
 *
 * Return: the specified exit status
 */
int print_error(char *error_msg, int exit_status)
{
	dprintf(STDERR_FILENO, "Error: %s\n", error_msg);
	return (exit_status);
}
/**
 * main - Entry point
 *
 * @argc: the number of command-line arguments
 * @argv: the array of command-line arguments
 *
 * Return: 0 on success, or an error code on failure
 */
int main(int argc, char **argv)
{
	int fd_from, fd_to, num_read, num_written;
	char buf[BUF_SIZE];

	if (argc != 3)
		return (print_error("Usage: cp file_from file_to", 97));

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		return (print_error("Can't read from file", 98));

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		return (print_error("Can't write to file", 99));

	while ((num_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		num_written = write(fd_to, buf, num_read);
		if (num_written != num_read)
			return (print_error("Can't write to file", 99));
	}
	if (num_read == -1)
		return (print_error("Can't read from file", 98));

	if (close(fd_from) == -1)
		return (print_error("Can't close fd", 100));

	if (close(fd_to) == -1)
		return (print_error("Can't close fd", 100));

	return (0);
}
