#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a char in a string
 * @s: string to be searched
 * @c: char to be checked
 *
 * Return: pointer to the first occurence of c in s
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			
		    return (s);
		s++;
	}
	if (c == *s)
	    return (s);
	return (NULL);
}	
