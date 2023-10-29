#include "main.h"
#include <stdio.h>
/**
 * _strspn - entry point
 * @s: pointer intial segment string
 * @accept: new segment string
 * Description: function that gets the length of a prefix substring.
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
break;
}
if (accept[j] == '\0')
return (i);
}
return (i);
}
