#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers..
 * @a: array being evaluated.
 *
 */

void print_diagsums(int *a, int size)
{
int i;
int j = size - 1;
int sum1 = 0;
int sum2 = 0;

for (i = 0; i < size * size; i = i + size + 1, j = j + size - 1)
{
sum1 = sum1 + a[i];
sum2 = sum2 + a[j];
}
printf("%i, %i\n", sum1, sum2);
}
