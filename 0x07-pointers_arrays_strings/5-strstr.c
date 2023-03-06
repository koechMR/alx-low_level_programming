#include "main.h"
/**
  *_strstr - a function that locates a string
  *@haystack: The string to be searched.
  *@needle: The substring to be located.
  *Return: a substring
  */
char *_strstr(char *haystack, char *needle)
{
	int name;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		name = 0;

		if (haystack[name] == needle[name])
		{
			do {
				if (needle[name + 1] == '\0')
					return (haystack);
				name++;

			} while (haystack[name] == needle[name]);
		}
		haystack++;
	}
	return ('\0');
}
