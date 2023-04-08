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

	unsigned int new = 0;
	int num = 0;

	if (b == NULL)
		return (0);

	while (b[num] != '\0')
	{
		if (b[num] == '0')
		{
			new = (new << 1);
		}
		else if (b[num] == '1')
		{
			new  = (new  << 1) | 1;
		}
		else
		{
			return (0);
		}
		num++;
	}
	return (new);
}
