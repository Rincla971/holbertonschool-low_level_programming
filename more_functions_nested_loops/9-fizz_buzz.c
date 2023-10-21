#include <stdio.h>

/**
 * main - entry point
 * Description: print all numbers between 1-100 but replace some multiples
 * Return:  0 if success
 */

int main(void)
{
int multiple;

for (multiple = 1; multiple <= 100; multiple++)
{
if ((multiple % 5) == 0 && (multiple % 3) == 0)
{
printf("FizzBuzz ");
}
else if ((multiple % 3) == 0)
{
printf("Fizz ");
}
else if ((multiple % 5) == 0)
{
printf("Buzz");
if (multiple != 100)
printf(" ");
}
else
{
printf("%d ", multiple);
}
}
printf("\n");
return (0);
}
