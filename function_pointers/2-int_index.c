#include "function_pointers.h"
#include <stdlib.h>

/*
 * int_index - kdkdkd
 * @array: kkkdk
 * @size: kdjdjdj
 * @cmp: ddjdjdk
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || size == NULL)
		return -1;
	if (cmp == NULL)
		return -1;

	for (i = 0 ; i < size ; i++)
		if (cmp(array[i]))
			return i;
	return -1;
}
