#include "main.h"

/**
 * print_last_digit - to print last digit
 *
 * @n: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (n < 0)
		m = -m;
	_putchar(m + '0');
	return (m);
}
