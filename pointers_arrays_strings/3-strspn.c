#include "main.h"

/**
 * _strcmp - entry point
 * @s1: pointer
 * @s2: pointer
 * Description: function that compares two strings.
 * Return: int if success
 */
int _strcmp(char *s1, char *s2)
{
while (*s1 != '\0')
{
if (*s1 == *s2)
{
s1++;
s2++;
}
else
{
if (*s1 > *s2)
{
return (*s1 - *s2);
}
else if (*s1 < *s2)
{
return (*s1 - *s2);
}
s1++;
s2++;
}
}
return (0);
}
