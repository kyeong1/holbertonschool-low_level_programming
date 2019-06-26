#include "holberton.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabetx10(void)
{
int a, k;
a = 'a';
for (k = 0; k < 10; k++)
{
while (a <= 'z')
{
_putchar(a);
a++;
}
_putchar('\n');
}
}
