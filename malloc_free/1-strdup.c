#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - hhhhh
 * @str: dddd
 *
 * Return: KKKK
 */

char *_strdup(char *str)
{
	char *dub;
	unsigned int i, leng;

	if (str == NULL)
		return (NULL);

	leng = strlen(str) + 1;

	dub = malloc(leng * sizeof(char));

	for (i = 0 ; i < leng ; i++)
		dub[i] = str[i];

	return (dub);
}
