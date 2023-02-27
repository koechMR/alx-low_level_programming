#include "main.h"
/**
  *rev_string - fuction that reverse a string
  *@s: parameter to be checked
  *Return: void
  */
void rev_string(char *s)
{
	char rev = s[0];
	int num = 0;
	int a;

	while (s[num] != '\0')
		num++;

	for (a = 0; a < num; a++)
	{
		num--;
		rev = s[a];
		s[a] = s[num];
		s[num] = rev;
	}
}
