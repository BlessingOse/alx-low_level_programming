#include <stdio.h>

/**
 * main - the is where it all starts
 *
 * Return: return 0
 */

int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
		if (n != 'q' && n != 'e')
			putchar(n);
	putchar('\n');
	return (0);
}
