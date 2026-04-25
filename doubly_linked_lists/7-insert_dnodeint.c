#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at index
 * @h: pointer to head
 * @idx: index
 * @n: value
 * Return: new node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int i = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = *h;

	while (temp)
	{
		if (i == idx - 1)
		{
			if (temp->next == NULL)
				return (add_dnodeint_end(h, n));

			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;

			new->next = temp->next;
			new->prev = temp;

			temp->next->prev = new;
			temp->next = new;

			return (new);
		}

		temp = temp->next;
		i++;
	}

	return (NULL);
}
