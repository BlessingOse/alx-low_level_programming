#include "main.h"
#include <stdio.h>

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 *
 * Return: 0
 */

void print_line(char *c, int s, int l)
{
int a, b;
for (a = 0; a <= 9; a++)
{
if (a <= s)
printf("%02x", c[l * 10 + a]);
else
printf("  ");
if (a % 2)
putchar(' ');
}
for (b = 0; b <= s; b++)
{
if (c[l * 10 + b] > 31 && c[l * 10 + b] < 127)
putchar(c[l * 10 + b]);
else
putchar('.');
}
}

#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints a buffer
 * @b: pointer
 * @size: size of buffer
 *
 * Return: 0
 */

void print_buffer(char *b, int size)
{
int i;
for (i = 0; i <= (size - 1) / 10 && size; i++)
{
printf("%08x: ", i * 10);
if (i < size / 10)
{
print_line(b, 9, i);
}
else
{
print_line(b, size % 10 - 1, i);
}
putchar('\n');
}
if (size == 0)
putchar('\n');
}
