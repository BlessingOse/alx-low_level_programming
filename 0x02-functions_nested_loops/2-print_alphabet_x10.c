#include "main.h"

/**
 * print_alphabet_x10 - to print ten times alphabets
 *
 * Return: to return 0
 */

void print_alphabet_x10(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		_putchar(n * 10);
	_putchar('\n');
}
