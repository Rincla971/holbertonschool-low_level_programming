#include <stdlib.h>
#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
*/
int main(void)
{
char letter;
int num;
for (num = 0; num <= 9; num++)
{
putchar('0' + num);
};
for (letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
};
putchar('\n');
return (0);
}
