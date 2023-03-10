#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: pointer
 *
 */

void reverse_array(int *a, int n)
{
	int b, c, tmp;

	c = n - 1;

	for (b = 0; b < n / 2; b++)
	{
		tmp = a[b];
		a[b] = a[c];
		a[c--] = tmp;
	}
}
