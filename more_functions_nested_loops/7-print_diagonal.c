#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n:Amount of \ to be printed
 *
 */

void print_diagonal(int n)

{
int i, j;

if (n <= 0)
putchar('\n');
else
for (j = 0; n > 0; n--, j++)
{
for (i = 0; i < j; i++)
{
putchar(' ');
}
putchar('\\');
putchar('\n');
}
}
