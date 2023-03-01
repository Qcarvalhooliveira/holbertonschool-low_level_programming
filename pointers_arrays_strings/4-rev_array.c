#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)

{
int i, t;

n -= 1;
for (i = 0; i < n--; i++)
{
t = a[i];
a[i] = a[n - i];
a[n - i] = t;
}
}
