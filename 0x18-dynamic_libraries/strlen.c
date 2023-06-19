#include "main.h"
/**
  *_strlen - function that returns length
  *@s: character
  *Return: length of str
  */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
