#include "holberton.h"
/**
 * prints_triangle - check the code for Holberton School students.
 * @size: size of triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
int j, k;
if (size <= 0)
{
_putchar('\n');
}
for (j = 1; j <= size; j++)
{
for (k = 1; k <= size; k++)
{
if (k <= size - j)
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
