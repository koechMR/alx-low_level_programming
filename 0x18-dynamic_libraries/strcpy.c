#include <stdio.h>
#include "main.h"
/**
  *_strcpy - function that copies the string pointed
  *@dest: parameter being checked
  *@src: Parameter checked
  *Return: pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int a = -1;

	do {
		a++;
		dest[a] = src[a];
	} while (src[a] != '\0');

	return (dest);
}
