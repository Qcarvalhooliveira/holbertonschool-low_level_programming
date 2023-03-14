#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - Function that creates an array of chars.
 * @size: the size of the memory to print.
 * @c: Char to initialise.
 *
 * Return: Pointer to array, NULL if fails
 */

char *create_array(unsigned int size, char c)

{
char *str;
unsigned int i;

if (!size)
return (NULL);
str = malloc(sizeof(char) * size);
if (!str)
return (NULL);
for (i = 0; i < size; ++i)
str[i] = c;
return (str);
}
