#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - Creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 *
 * Return: Nothing.
 */

int *array_range(int min, int max)
{
	int *range, len;
	int i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	range = malloc(sizeof(int) * len);
	if (!range)
		return (NULL);
	while (len--)
		*(range + i++) = min++;
	return (range);
}
