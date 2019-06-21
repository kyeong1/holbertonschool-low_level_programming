#include <stdio.h>
/*
*main-sizeof
*Return:Always 0 (Success)
*/
int main(void)
{
printf("Size of a char: %d Byte(s)\n"), sizeof(char);
printf("Size of an int: %d Byte(s)\n"), sizeof(int);
printf("Size of a long int: %ld Byte(s)\n"), sizeof(long int);
printf("Size of a long long int: %ld Byte(s)\n"), sizeof(long long int);
printf("Size of a float: %g Byte(s)\n"), sizeof(float);
return (0);
}
