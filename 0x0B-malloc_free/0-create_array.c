#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: array size
 * @c: character to initialize the array
 *
 * Return: NULL if size = 0
 * a pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *n;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	n = (char *) malloc(sizeof(char) * size);

	if (n == NULL)
		return (0);

	while (i < size)
	{
		*(n + i) = c;
		i++;
	}

	*(n + i) = '\0';

	return (n);
}
