#include "main.h"
/**
 *get_bit - function that returns the value of a bit
 *@n: bit to be checked
 *@index: index to get value at
 *Return: if an error occur -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
