#include "main.h"

/**
 * print_line - prints '_' as many times the user wants
 * @n: n-times the '_' appears
 *
 * Return: void
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = n ; i >= 0 ; i--)
	{
		if (i == 0)
		{
			_putchar('\n');
			break;
		}
		_putchar('_');
	}
	}
	else
		_putchar('\n');
}
