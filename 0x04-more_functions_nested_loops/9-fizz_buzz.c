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
if (k % 15 == 0)
{
printf("FizzBuzz");
}
else if (k % 5 == 0)
{
printf("Buzz");
}
else if (k % 3 == 0)
{
printf("Fizz");
}
else
{
printf("%d", k);
}
printf("Buzz");
printf("\n");
return (0);
}
