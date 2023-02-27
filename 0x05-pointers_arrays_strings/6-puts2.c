#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character
 * followed be a new line
 *
 * @str: string
 */

void puts2(char *str)
{
	int len, a;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (a = 0; a < len; a += 2)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}
