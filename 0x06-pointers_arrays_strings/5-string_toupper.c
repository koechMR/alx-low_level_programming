#include "main.h"
/**
  *string_toupper - fuction that changes to upper
  *@n:input char
  *Return: 0
  */
char *string_toupper(char *n)
{
	int i;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
			n[i] = n[i] - 32;
	}
	return (n);
}
