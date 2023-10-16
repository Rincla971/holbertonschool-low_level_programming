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
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter == 'e')
continue;
if (letter == 'q')
continue;
putchar(letter);
}
putchar(0x0a);
return (0);
}
