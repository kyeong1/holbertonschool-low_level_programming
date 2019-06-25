#include "holberton.h"
#include "_putchar.c"
/**
 * print_alphabet - uses print_alphabet function
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
