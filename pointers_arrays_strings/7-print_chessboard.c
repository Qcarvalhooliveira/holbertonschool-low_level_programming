nclude "main.h"
#include <stdio.h>

/**
 * print_chessboard - Function that that prints the chessboard.
 * @haystack: string being chearched.
 * @needle: substring being searched.
 *
 * Return: pointer to beginning of located substing or null.
 */

void print_chessboard(char (*a)[8])
{
int i, j;

for (i = 0; i < 8; ++i)
{
for (j = 0; j < 8; ++j)
putchar'a[i][j]);
putchar('\n');
}
}
