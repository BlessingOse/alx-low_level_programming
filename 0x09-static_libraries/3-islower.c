#include "main.h"

/**
 * _islower - to find the lower case
 *
 * @c: parameter to check
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
