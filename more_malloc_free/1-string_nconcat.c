#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates s1 with first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2
 *
 * Return: pointer to newly allocated memory containing the result,
 *         or NULL if malloc fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s2 != NULL)
		len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(len1 + n + 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat[i] = s1[i];

	for (j = 0; j < n; j++)
		concat[i + j] = s2[j];

	concat[i + j] = '\0';

	return (concat);
}
