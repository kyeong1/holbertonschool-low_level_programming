#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main = entry point */
/* return 0 = success */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int y;
y = n % 10;
<<<<<<< HEAD
if (y > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, y);
}
else if (y < 6 && != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, y);
}
else
{
printf("Last digit of %d is %d ans is 0\n", n, y);
}
=======
if (n > 5)
printf("Last digit of %d is %d", n, y);
if (y > 5)
printf(" and is greater than 5");
if (n == 0)
printf("Last digit of %d is %d", n, y);
if (y == 0)
printf(" and is 0");
if (n < 6)
printf("Last digit of %d is %d", n, y);
if (y < 6)
printf(" and is less than 6 and not 0\n");
>>>>>>> 5146c7d8814865c25980e5c53a1ce19ad13590df
return (0);
}
