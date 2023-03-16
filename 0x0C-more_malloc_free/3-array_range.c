#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: first value of the array
 * @max: last value of the array
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
int *array;
int num;
int index;

	if (min > max)
		return (NULL);

	index = max - min + 1;

	array = malloc(sizeof(int) * index);

	if (array == NULL)
		return (NULL);

	for (num = 0; num < index; num++)
		array[num] = min++;

	return (array);
}
