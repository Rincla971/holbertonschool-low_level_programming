#include "main.h"
#include <stdio.h>
/**
 * leet - entry point
 * @s: pointer
 * Description: function that encodes a string into 1337.
 * Return: convert string if success
 */
char *leet(char *s)
{
int i, j;
char a[] = "aAeEoOtTlL";
char b[] = "4433007711";

for (i = 0; *(s + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == s[i])
s[i] = b[j];
}
}
return (s);
}
