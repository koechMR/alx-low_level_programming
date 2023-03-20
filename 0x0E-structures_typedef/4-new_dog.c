#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: variable pointing to name of dog
 * @age: age of dog
 * @owner: variable pointing to dog owner
 * Return: variable pointing to dog_t struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog;
	unsigned int a, b, c;

	if (name == NULL || owner == NULL)
		return (NULL);
	n_dog = malloc(sizeof(dog_t));
	/* New dog's name */
	if (n_dog == NULL)
		return (NULL);
	for (b = 0; name[b]; b++)
		;
	b++;

	n_dog->name = malloc(b * sizeof(char));
	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a < b; a++)
		n_dog->name[a] = name[a];
	/* New dog age */
	n_dog->age = age;
	for (c = 0; owner[c]; c++)
		;
	c++;

	n_dog->owner = malloc(c * sizeof(char));

	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	for (a = 0; a < c; a++)
		n_dog->owner[a] = owner[a];
	return (n_dog);
}
