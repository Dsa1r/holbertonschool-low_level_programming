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
	unsigned int i;
	unsigned int leng = 1;

	if (str == NULL)
		return (NULL);

	for (i = 0 ; str[i] == '\0' ; i++)
		leng++;

	dub = malloc(leng * sizeof(char));

	for (i = 0 ; i < leng ; i++)
		dub[i] = str[i];

	return (dub);
}
