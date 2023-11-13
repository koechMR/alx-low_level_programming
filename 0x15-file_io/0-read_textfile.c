#include "main.h"

/**
 *read_textfile - read the text file and print
 *@filename: filename to be passed
 *@letters: number of letters it should read and print
 *Return: number of actual letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num, fp, xp;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	num = open(filename, O_RDONLY);
	fp = read(num, buffer, letters);
	xp = write(STDOUT_FILENO, buffer, fp);

	if (num == -1 || fp == -1 || xp == -1 || xp != fp)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(num);

	return (xp);
}
