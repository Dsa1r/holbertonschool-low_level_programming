#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *res;
	unsigned int i = 0, j = 0, len = 0;

	if (s1 != NULL)
		while (s1[len])
			len++;
	if (s2 != NULL)
		while (s2[j++])
			len++;

	res = malloc(len + 1);
	if (res == NULL)
		return (NULL);

	len = 0;
	j = 0;
	if (s1 != NULL)
		while (s1[j])
			res[len++] = s1[j++];
	j = 0;
	if (s2 != NULL)
		while (s2[j])
			res[len++] = s2[j++];

	res[len] = '\0';
	return (res);
}
