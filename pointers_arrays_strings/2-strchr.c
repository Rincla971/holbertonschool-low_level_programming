#include "main.h"

/**
 * *_strncpy - entry point
 * @dest: pointer
 * @src: pointer
 * @n: var
 * Description: function that copies a string.
 * Return: string if success
 */
char *_strncpy(char *dest, char *src, int n)
{
char *tmp1 = dest;
char *tmp2 = src;

while (src < tmp2 + n && *src != '\0')
{
*dest = *src;
src++;
dest++;
}
while (src < tmp2 + n)
{
*dest = '\0';
dest++;
src++;
}
dest = tmp1;
src = tmp2;

return (dest);
}
