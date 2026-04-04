#include <stdlib.h>
#include "dog.h"

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
	int i, len_name = 0, len_owner = 0;
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	if (name != NULL)
	{
		for (len_name = 0; name[len_name]; len_name++)
			;
		d->name = malloc(len_name + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len_name; i++)
			d->name[i] = name[i];
	}
	else
		d->name = NULL;

	if (owner != NULL)
	{
		for (len_owner = 0; owner[len_owner]; len_owner++)
			;
		d->owner = malloc(len_owner + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		for (i = 0; i <= len_owner; i++)
			d->owner[i] = owner[i];
	}
	else
		d->owner = NULL;

	d->age = age;

	return (d);
}
