#include <stdio.h>

/**
 * main - it all starts here
 *
 * Return: to return 0
 */

int main(void)
{
	int n;
	char m;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (m = 'a' ; m <= 'f' ; m++)
		putchar(m);
	putchar('\n');
	return (0);
}
