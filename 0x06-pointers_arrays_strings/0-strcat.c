#include <stdio.h>
#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: destination
 * @src: string
 *
 * Return: a pointer
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;
	b = 0;

	while (dest[a] != '\0')
		a++;

	while (src[b] != '\0')
	{
		dest[a] = src[b];
		b++;
		a++;
	}

	dest[a] = '\0';

	return (dest);
}
