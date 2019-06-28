#include "holberton.h"
/**
 * print_square - check the code for Holberton School students.
 * @size: int
 * Return: Always 0.
 */
void print_square(int size)
{
int s, d;
if (size <= 0)
_putchar('\n');
for (s = 0; s < size; s++)
{
for (d = 0; d < size; d++)
_putchar('#');
_putchar('\n');
}
}
