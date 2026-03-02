#include "main.h"

/*
 * _isupper()
	check if the letter is upper character by returning it one
*
Return: one if its uppercase and 0 otherwise
*/
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
