#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line in the terminal.
 *
 * @n:Length of line.
 *
 */

void print_line(int n)

{

while (n > 0)
{
putchar('_');
n--;
}
putchar('\n');
}
