#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to print in reverse
 *
 * Return: Nothing (void)
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string reached */
	{
		return;  /* Start unwinding */
	}

	_print_rev_recursion(s + 1);  /* Recursive call with next character */
	_putchar(*s);  /* Print current character after recursion returns */
}
