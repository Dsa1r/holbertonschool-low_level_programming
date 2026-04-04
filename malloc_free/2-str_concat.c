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
	unsigned int i, j, len1 = 0, len2 = 0;

	if (s1 != NULL)
		while (s1[len1] != '\0')
			len1++;

	if (s2 != NULL)
		while (s2[len2] != '\0')
			len2++;

	res = malloc((len1 + len2 + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);

	i = 0;
	if (s1 != NULL)
	{
		j = 0;
		while (s1[j] != '\0')
		{
			res[i] = s1[j];
			i++;
			j++;
		}
	}

	if (s2 != NULL)
	{
		j = 0;
		while (s2[j] != '\0')
		{
			res[i] = s2[j];
			i++;
			j++;
		}
	}

	res[i] = '\0';

	return (res);
}
