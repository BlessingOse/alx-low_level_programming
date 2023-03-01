#include <stdio.h>
#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination
 * @src: string source
 * @n: num of bytes
 *
 * Return: a pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
