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
	int bk, len, num;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);

	bk = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (bk == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			continue;

		num = write(bk, text_content, len);
		if (num == -1)
		{
			close(bk);
			return (-1);
		}
	}
	close(bk);
	return (1);
}
