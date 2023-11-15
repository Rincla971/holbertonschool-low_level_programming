#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Entry point
 *@size: size of the array
 *@c: character
 * Return: a pointer to the array, or NULL if it fails
 */
char create_array(unsigned int size, char c)
{

        unsigned int i;
        chartableau;

        if (size == 0)
                return (NULL);

        tableau = malloc(sizeof(char) * size);
        if (tableau == 0)
                return (NULL);

        for (i = 0; i < size; i++)
                tableau[i] = c;

        /tableau[i] = '\0';/

        return (tableau);
}
