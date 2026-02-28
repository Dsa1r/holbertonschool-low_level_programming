#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all lowercase letters
 *              of the English alphabet in reverse order,
 *              starting from 'z' and ending with 'a',
 *              followed by a new line. It uses only the
 *              putchar function exactly twice.
 *
 * Return: Always 0 (indicating successful execution)
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
