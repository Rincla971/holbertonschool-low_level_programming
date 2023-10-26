#include "main.h"
#include <stdio.h>
/**
 * cap_string - entry point
 * @s: pointer
 * Description: function that changes
 * all lowercase letters of a string to uppercase.
 * Return: convert string if success
 */
char *cap_string(char *s)
{
int i;
int capitalize = 1;

for (i = 0; s[i] != '\0'; i++)
{
if (capitalize)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
capitalize = 0;
}

if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' ||
s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?' ||
s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}')
{
capitalize = 1;
}
}
return (s);
}
