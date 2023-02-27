#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * followed by a new line
 *
 * @n: number of elements
 * @a: pointer
 */

void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		if (j == 0)
			printf("%d", a[j]);
		else
			printf(", %d", a[j]);
	}
		printf("\n");
}
