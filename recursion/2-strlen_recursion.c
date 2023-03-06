#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 *_strlen_recursion - Function that returns the length of a string..
 *
 * @s: string being evaluated.
 * Return: Lenght of the string.
 */

int _strlen_recursion(char *s)
{

if (!*s)
return (0);
return (1 + _strlen_recursion((s + 1)));

}
