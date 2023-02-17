#include <stdio.h>

/**
 * main - it all starts here
 *
 * Return: it returns 0
 */

int main(void)
{
	int m;
	int n;

	for (m = 0 ; m < 10 ; m++)
	{
		for (n = 1 ; n < 10 ; n++)
		{
			if (m < n && m != n)
			{
				putchar(m + '0');
				putchar(n + '0');
				if (m + n != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
