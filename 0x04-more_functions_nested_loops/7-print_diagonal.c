#include "holberton.h"
/**
 * print_diagonal - check the code for Holberton School students.
 * @n: int
 * Return: Always 0.
 */
void print_diagonal(int n)
{
int d, f;
if (n <= 0)
_putchar ('\n');
for (d = 0; d < n; d++)
{
for (f = 0; f <= d; f++)
if (d == f)
{
_putchar('\\');
_putchar('\n');
}
else
{
_putchar(' ');
}
}
}
