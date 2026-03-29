#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - KKKKKK
 * @size: jjjjj
 * @c: kkkkk
 *
 * Return: kkkkk
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	for (i = 0; i < size ; i++)
		array[i] = c;

	if (array == NULL)
		return (NULL);

	return (array);
}

