#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - Function that allocates memory using malloc.
 *@b: Amount of memory being allocated.
 *
 * Return: Pointer to allocated memory..
 */

void *malloc_checked(unsigned int b)
{
	void *n;

	n = malloc(b);
	if (!n)
		exit(98);
	return (n);
}
