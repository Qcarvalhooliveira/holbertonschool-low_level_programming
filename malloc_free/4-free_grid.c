#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created.
 * @grid: 2-D array.
 * @height: height of array
 *
 */

void free_grid(int **grid, int height)

{

	int i;

	for (i = 0; i < height; ++i)
		free(*(grid + i));
	free(grid);
}
