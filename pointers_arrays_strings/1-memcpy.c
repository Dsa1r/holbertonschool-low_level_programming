#include "main.h"

/**
 * _memcpy - kkkkkkkkk
 * @dest: sssssssssss
 * @src: dll
 * @n: tttttt
 *
 * Return: char kkkk
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];

	return (dest);
}
