#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: pointer to pointer to first element in array of pointers
 * Return: pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int arg, x, a, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (x = 0; av[arg][x]; x++)
			len++;
	}

	str = malloc(sizeof(char) * len + 1);

	if (str == NULL)
		return (NULL);

	a = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (x = 0; av[arg][x]; x++)
			str[a++] = av[arg][x];

		str[a++] = '\n';
	}

	str[len] = '\0';

	return (str);
}
