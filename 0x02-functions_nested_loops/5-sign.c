#include "holberton.h"
/**
 * print_sign - prints the sign of a number
 *
 * Return : 1 if c > 0, 0 if c is zero, -1 if c is < 0
 *
 */
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
}
return (1);
else if (c == 0)
{
_putchar ('0');
}
return (0);
else (c < 0);
{
_putchar ('-');
}
return (-1);
}
