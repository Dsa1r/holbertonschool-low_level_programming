#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array and initializes it to 0
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to allocated memory, or NULL on failure or if nmemb/size is 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total, i;
	unsigned char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);

	p = (unsigned char *)ptr;
	for (i = 0; i < total; i++)
		p[i] = 0;

	return (ptr);
}
