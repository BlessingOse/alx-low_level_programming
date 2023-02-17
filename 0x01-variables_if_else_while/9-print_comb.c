#include <stdio.h>

/**
 * main - it all starts here
 *
 * Return: to return 0
 */

int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{
		putchar(n + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
