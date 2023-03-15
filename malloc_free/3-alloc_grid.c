#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Check the code.
 * Description: 'Returns a pointer to a 2 dimensional array of integers.'
 * @width: Is an integer.
 * @height: Is an integer.
 * Return: A pointer to a array, else NULL.
 */

int **alloc_grid(int width, int height)
{
	int **i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		i = malloc(sizeof(int) * (width + 1));
		if (i == NULL)
		{
			exit(1);
		}
		for (j = 0; j < width; j++)
		{
			i[j] = malloc(sizeof(int) * (height + 1));
			if (i[j] == NULL)
			{
				free(i);
				exit(1);
			}
		}
		for (j = 0; j < width; j++)
		{
			for (k = 0; k < height; k++)
			{
				i[j][k] = 0;
			}
		}
		return (i);
	}
}
