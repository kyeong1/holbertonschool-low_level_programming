#include "holberton.h"
/**
 * print_alphabet - print lowercase a-z
 *
 * Return: 0
 **/
void print_alphabet(void)
{
int a;
a = 'a';
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
_putchar('\n');
}
return (0);
}
