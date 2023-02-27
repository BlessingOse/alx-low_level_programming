#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 *
 * @a: poniter to be swapped
 * @b: pointer to be swapped
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
