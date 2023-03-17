#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Check the code.
 * Description: 'Frees a 2 dimensional grid previusly
 * created by your alloc_grid.'
 * @grid: is an array of integers.
 * @height: is an integer.
 */

void free_grid(int **grid, int height)
{
		while (height > 1)
		{
			free(grid[height]);
			height--;
		}
	free(grid);
}
