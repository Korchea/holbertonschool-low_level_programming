#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Check the code.
 * Description: 'Frees a 2 dimensional grid.'
 * @grid: is an array of integers.
 * @height: is an integer.
 */

void free_grid(int **grid, int height)
{
	if (grid != NULL && height > 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
		}
		free(grid);
	}
}
