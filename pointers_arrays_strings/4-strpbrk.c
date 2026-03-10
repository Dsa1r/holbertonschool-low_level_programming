#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - aaaa
 * @s: kkkk
 * @accept: kkkk
 *
 * Return: adderss
 */

char *_strpbrk(char *s, char *accept)
{
	int a;
	int b;

	for (a = 0 ; s[a] != '\0' ; a++)
	{
		for (b = 0 ; accept[b] != '\0' ; b++)
		{
			if (s[a] == accept[b])
				return (&s[a]);

		}


	}
return (NULL);
}
