#include "main.h"
#include <stdlib.h>

/**
 * create_file - creates a file with a given name and writes a given
 *               text to it
 * @filename: the name of the file to create
 * @text_content: the text to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int num, sec = 1, len = 0;

	if (filename == NULL)
		return (-1);

	num = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (num == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		sec = write(num, text_content, len);
		if (sec == -1)
			sec = -1;
	}
	close(num);

	return (sec);
}
