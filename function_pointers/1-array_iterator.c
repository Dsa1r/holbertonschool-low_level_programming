#include "function_pointers.h"

/**
 * array_iterator - kjkjj
 * @array: kkkk
 * @size: jkjj
 * @action: kdkdkkd
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size ; i++)
		action(array[i]);
}
