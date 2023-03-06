#include "main.h"
/**
  * *_memset - fuction that fills memoy with a constant byte.
  * @s: pointer to constant
  * @b: constan
  * @n: max byte
  * Retun: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
