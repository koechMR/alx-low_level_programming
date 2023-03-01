#include "main.h"
/**
 * _strncpy - copy at most n characters from src to dest
 * @dest: destination string
 * @src: source string
 * @n: maximum number of characters to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
