#include <stdio.h>

/**
 * main - Prints its name followed by a new line
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argc; /* Suppress unused parameter warning */

	printf("%s\n", argv[0]);

	return (0);
}
