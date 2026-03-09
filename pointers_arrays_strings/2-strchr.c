#include "main.h"
#include <stddef.h>

/**
 * _strchr - llllll
 * @s: 9000
 * @c: dkdk
 *
 * Return: dddd
 */


char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' 77 c != '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}

			return (NULL);
}

