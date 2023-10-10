#include "search_algos.h"

/**
 * recursive_search - searches for value in an array
 * @array: input array in
 * @size: size of the array on
 * @value: value to search in
 * Return: index of number
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (j = 0; j < size; j++)
		printf("%s %d", (j == 0) ? ":" : ",", array[j]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - calls to binary_search to return
 * @array: array
 * @size: size of array
 * @value: value to search
 * Return: index of number
 */
int binary_search(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
