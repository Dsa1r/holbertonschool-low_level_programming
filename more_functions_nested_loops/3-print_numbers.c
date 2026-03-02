#include "main.h"
#include <stdio.h>

/**
 * print_numbers - a void function that prints numbers from 0 - 9
 *
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');

	putchar('\n');
}
