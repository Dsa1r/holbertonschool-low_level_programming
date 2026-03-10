#include "main.h"

/**
 * _strspn - hhhhhh
 * @s: hhhh
 * @accept: jjjj
 *
 * Return: kkkk
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int b = 0;
	int found;


	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found == 0)
			break;
		b++;
	}

	return (b);
}
