#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: width of array
 * @height: height of array
 *
 * Return: Pointer to 2-D array, NULL if 0 or negative dimension.
 */

int **alloc_grid(int width, int height)

{

int i;
int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (!array)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		*(array + i) = malloc(sizeof(int) * width);
		if (!(*(array + i)))
		{
			while (i >= 0)
			{
				free(*(array + i));
				--i;
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}




