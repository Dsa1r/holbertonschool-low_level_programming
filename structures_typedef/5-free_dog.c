#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory allocated for a dog_t
 * @d: pointer to the dog to free
 *
 * Description: This function frees the name and owner strings,
 *              then frees the struct itself. If d is NULL, does nothing.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name != NULL)
		free(d->name);

	if (d->owner != NULL)
		free(d->owner);

	free(d);
}
