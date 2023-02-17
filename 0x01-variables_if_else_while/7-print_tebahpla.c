#include <stdio.h>

/**
 * main - it all starts here
 *
 * Return: to return 0
 */
int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
