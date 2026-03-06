#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: the pointer of the string
 *
 * Return: void
 */
void print_rev(char *s)
{
	char *ptr = s;

	while (*ptr != '\0')
		ptr++;

	while (ptr > s)
	{
		ptr--;
		_putchar(*ptr);
	}

	_putchar('\n');
}
