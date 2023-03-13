#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: matrix width
 * @height: matrix width
 *
 * Return: return NULL on failure
 * If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, n;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (n = 0; n <= i; n++)
				free(arr[n]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (n = 0; n < width; n++)
		{
			arr[i][n] = 0;
		}
	}
	return (arr);
}
