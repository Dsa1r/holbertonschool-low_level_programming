#include "main.h"


/**
 * _isdigit - checks if the character is digit or not
 * @c: character enterd by the function ot the user
 * Return: 1 if its digit< and zero otherwise
 */



int _isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
