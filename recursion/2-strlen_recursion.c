#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strlen_recursion - Function that returns the length of a string..
 *
 * @s: string being evaluated.
 */

int _strlen_recursion(char *s)
{

if (!*s)
return (0);
retur (1 + _print_rev_recursion((s + 1)));

}
