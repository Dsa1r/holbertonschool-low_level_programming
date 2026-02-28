#include "main.h"

/**
 * _islower - Checks if a character is lowercase
 * @c: The character to check (as an integer)
 *
 * Description: Returns 1 if c is lowercase, 0 otherwise
 *              Checks ASCII values: lowercase letters are 97-122
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
