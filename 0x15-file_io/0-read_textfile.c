#include "main.h"
#include <stdlib.h>
/**
*read_textfile - function that reads a text file and print
*@filename: parameter checked
*@letters: size of the letter
*Return: 0 if func fail
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t num, fd, x;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	num = open(filename, O_RDONLY);
	fd = read(num, buffer, letters);
	x = write(STDOUT_FILENO, buffer, fd);

	if (num == -1 || fd == -1 || x == -1 || x != fd)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(num);

	return (x);
}
