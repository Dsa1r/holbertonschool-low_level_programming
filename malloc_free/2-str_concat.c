#include "main.h"
#include <stdlib.h>

/**
 * str_concat - kkk
 *
 *
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j = 0;
	unsigned int leng = 1;
	char *cont;

	if (s1 == NULL && s2 == NULL)
		return "";

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0' ; i++)
		leng++;

	if (s2 != NULL)
		for (i = 0; s2[i] != '\0' ; i++)
		leng++;

	cont = malloc(leng * sizeof(char));

	if (cont == NULL)
		return(NULL);
i = 0;
	while(s1 != NULL && s1[i] != '\0')
	{
		cont[i] = s1[i];
		i++;
	}

	while (s2 != NULL && s2[j] != '\0')
	{
		cont[i] = s2[j];
		j++;
		i++;
	}

	return cont;
}
