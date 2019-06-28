#include "holberton.h"
/**
 * more_numbers - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
int n, l;
for (l = 0; l <= 9; l++)
{
for (n = 0; n <= 14; n++)
{
if (n > 9)
_putchar(n / 10 + '0');

_putchar(n % 10 + '0');
}
_putchar('\n');
}
}
