#include "holberton.h"
/**
 * print_line - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */
void print_line(int n)
{
int f;
for (f = 0; f < n; f++)
{
_putchar('_');
}
_putchar('\n');
}
