#include "main.h"
/**
  *_strcat - fuction that concatinates two strings
  *@dest: parameter checked
  *@src: to be checked
  *Return: 0
  */
char *_strcat(char *dest, char *src)
{
	int dest_length = 0;
	int name = 0;

	while (dest[dest_length] != '\0')
	{
		dest_length++;
	}
	while (src[name] != '\0')
	{
		dest[dest_length + name] = src[name];
		name++;
	}
	dest[dest_length + name] = '\0';
	return (dest);
}
