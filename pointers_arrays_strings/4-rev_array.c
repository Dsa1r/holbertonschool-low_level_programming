#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements in the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		i++;
		j--;
	}
}
