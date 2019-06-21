#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main = entry point */
/* return = 0 (Success) */
<<<<<<< HEAD
=======
/* @void: no argument */ 
>>>>>>> 5146c7d8814865c25980e5c53a1ce19ad13590df
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
if (n == 0)
{
printf("%d is zero\n", n);
}
if (n < 0)
{
printf("%d is negative\n", n);
}
return (0);
}
