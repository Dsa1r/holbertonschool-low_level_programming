#include "main.h"

/**
 * print_rev - printdd
 * @s: the pointer of the string
 *
 * Return: void
 */



void print_rev(char *s)
{
	int _strlen(char *s);
	int d =  _strlen(s);

	while (d >= 0)
	{
		_putchar(s[d]);
		d--;
	}

	_putchar('\n');
}
