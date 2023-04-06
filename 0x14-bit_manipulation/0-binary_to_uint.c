#include "main.h"
#include <string.h>
/**
 *binary_to_uint - fucntion that converts a binary number
 *@b: parameter being checked
 *Return: the converted number or 0 if
 *    there is one or more chars in the string b that is
 *    not 0 o 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{

	unsigned int num = 0;
	unsigned int new = 1;

	int slen = strlen(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = slen - 1; i >= 0; i--)
	{
		if (b[i] == '1')
			num += new;
		else if (b[i] != '0')
			return (0);

		new *= 2;
	}
	return (num);
}
