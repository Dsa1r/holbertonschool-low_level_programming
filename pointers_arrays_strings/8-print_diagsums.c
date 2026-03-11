#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - kkkkk
 * @a: kkkk
 * @size: kkkkk
 *
 * Return: kkkkkk
 */


void print_diagsums(int *a, int size)
{
	int i;
	int s = 0;
	int d = 0;

	for (i = 0 ; i < size ; i++)
		s += a[i * size + i];

	for (i = 1 ; i <= size ; i++)
		d += a[i * size - i];

	printf("%d, %d\n", s, d);
}
