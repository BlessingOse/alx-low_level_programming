#include "main.h"

/**
 * *_memcpy -  copies memory area
 * @n: bytes to be copied
 * @dest: destination to be copied to
 * @src: memory to be copied from
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
