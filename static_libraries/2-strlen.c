#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 *@s: Variable being evaluated.
 *
 * Return: Lenght of string
 */

int _strlen(char *s)

{

int i = 0;

while (*s++)
i++;
return (i);

}
