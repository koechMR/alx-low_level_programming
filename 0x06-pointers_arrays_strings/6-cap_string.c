#include "main.h"
/**
  *cap_string - capitalize all word
  *@a: string
  *Return: capital letters
  */
char *cap_string(char *a)
{
	int i, x;
	int cap = 32;
	int separators[] = {',', ';', '.', '?', '"',
		'(', ')', '{', '}', ' ', '\n', '\t'};

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - cap;
		}
		cap = 0;

		for (x = 0; x <= 12; x++)
		{
			if (a[i] == separators[x])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (a);
}
