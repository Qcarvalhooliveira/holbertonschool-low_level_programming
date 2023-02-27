#include "main.h"
#include <stdio.h>

/**
 * _print_rev - Prints a string, in reverse.
 *@s: String being reversed.
 */

void print_rev(char *s);

{
int len, i;

len = strlen(s) - 1;
for (i = len; i >= 0; i--)
putchar(*(s + i));
putchar('\n');

}
