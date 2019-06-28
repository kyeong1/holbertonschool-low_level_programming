#include <stdio.h>
/**
 * main - entry point
 * @void: no int
 * Return: 0
 */
int main(void)
{
int k;
for (k = 1; k < 100; k++)
if (k % 3 == 0)
{
printf("Fizz");
printf(" ");
}
else if (k % 5 == 0)
{
printf("Buzz");
printf(" ");
}
else if (k % 15 == 0)
{
printf("FizzBuzz");
printf(" ");
}
else
{
printf("%d", k);
printf(" ");
}
printf("\n");
return (0);
}
