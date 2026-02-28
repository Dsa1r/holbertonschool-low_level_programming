#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet followed by a new line
 *
 * Description: Uses _putchar only twice to print a-z and new line
 *
 * Return: void
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
