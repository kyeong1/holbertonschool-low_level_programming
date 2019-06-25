#include "holberton.h"
#include "_putchar.c"
/**
 * print_alphabet - uses print_alphabet function
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
