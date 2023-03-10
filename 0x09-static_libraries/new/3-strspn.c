#include "main.h"
/**
  *_strspn - fuction that gets the length of a prefi
  *@s: character
  *@accept: bytes
  *Return: number of bytes in similar segment
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int name;

	while (*s)
	{
		for (name = 0; accept[name]; name++)
		{
			if (*s == accept[name])
			{
				bytes++;
				break;
			}

			else if (accept[name + 1] == '\0')
				return (bytes);
		}

		s++;
	}
	return (name);
}
