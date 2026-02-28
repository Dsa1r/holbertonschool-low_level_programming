#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all numbers of base 16 in lowercase
 *              (0-9 then a-f) using only putchar three times
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	/* Print digits 0-9 */
	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}

	/* Print letters a-f */
	for (num = 0; num < 6; num++)
	{
		putchar(num + 'a');
	}

	putchar('\n');

	return (0);
}
