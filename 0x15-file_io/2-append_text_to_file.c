#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Name of the file to append text to.
 * @text_content: Text to append to the end of the file.
 *
 * Return: 1 on success, or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; text_content[i] != '\0'; i++)
		;

	res = write(fd, text_content, i);
	if (res == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}

