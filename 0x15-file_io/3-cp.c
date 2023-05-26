#include "main.h"

/**
 * sub_file - checks if files can be opened.
 * @file_source: file source.
 * @file_dest: file destination.
 * @argv: arguments vector.
 * Return: no return.
 */
void sub_file(int file_source, int file_dest, char *argv[])
{
	if (file_source == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - Entry point.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_source, file_dest, error_close;
	ssize_t characters, write_c;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_source = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	sub_file(file_source, file_dest, argv);

	characters = 1024;
	while (characters == 1024)
	{
		characters = read(file_source, buffer, 1024);
		if (characters == -1)
			sub_file(-1, 0, argv);
		write_c = write(file_dest, buffer, characters);
		if (write_c == -1)
			sub_file(0, -1, argv);
	}

	error_close = close(file_source);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}

	error_close = close(file_dest);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_source);
		exit(100);
	}
	return (0);
}

