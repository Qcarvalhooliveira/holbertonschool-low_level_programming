#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string, in reverse.
 *@s: String being reversed.
 */

void print_rev(char *s)

{
int len, i;

len = _strlen(s) - 1;
for (i = len; i >= 0; i--)
_putchar(*(s + i));
_putchar('\n');

}
