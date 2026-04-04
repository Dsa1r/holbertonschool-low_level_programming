#include <stdlib.h>
#include "dog.h"

/**
 * _strdup_custom - duplicates a string without using strcpy/strlen
 * @str: string to duplicate
 *
 * Return: pointer to new string, NULL on failure
 */
char *_strdup_custom(char *str)
{
	int i, len = 0;
	char *copy;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	copy = malloc(len + 1);
	if (copy == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		copy[i] = str[i];

	return (copy);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup_custom(name);
	d->owner = _strdup_custom(owner);
	d->age = age;

	if ((name != NULL && d->name == NULL) ||
	    (owner != NULL && d->owner == NULL))
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}

	return (d);
}
