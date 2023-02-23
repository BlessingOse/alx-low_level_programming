#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * main - program that finds and prints the largest prime factor
 * followed by a new line
 *
 * Return: to return 0
 */

int main(void)
{
	long int a;
	long int max;
	long int i;

	a = 612852475143;
	max = -1;

	while (a % 2 == 0)
	{
		max = 2;
		a /= 2;
	}

	for (i = 3; i <= sqrt(a); i = i + 2)
	{
		while (a % i == 0)
		{
			max = i;
			a = a / i;
		}
	}

	if (a > 2)
		max = a;

	printf("%ld\n", max);

	return (0);
}
