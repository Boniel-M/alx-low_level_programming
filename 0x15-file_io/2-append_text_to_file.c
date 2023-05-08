#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * append_text_to_file - Appends text to the end of a file
 *
 * @filename: Name of the file
 * @text_content: Text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, write_count;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_count = write(fd, text_content, len);
	if (write_count == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
