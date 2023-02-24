#include "main.h"
#include <stdio.h>

/**
 * print_square - Prints a square.
 *
 * @size: Dimensions of square.
 *
 */

void print_square(int size)

{
int i, j;

if (size <= 0)
putchar('\n');
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
putchar('#');
}
putchar('\n');
}
}
