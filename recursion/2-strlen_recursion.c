#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to measure
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string reached */
	{
		return (0);  /* Return 0 for empty string */
	}

	return (1 + _strlen_recursion(s + 1));  /* Count current char + rest of string */
}
