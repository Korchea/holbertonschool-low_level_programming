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
		i = malloc(sizeof(int *) * height);
		if (i == NULL)
		{
			free(i);
			exit(1);
		}
		for (j = 0; j < height; j++)
		{
			i[j] = malloc(sizeof(int) * width);
			if (i[j] == NULL)
			{
				for (j = 0; j < height; j++)
				{
					free(i[j]);
				}
				free(i);
				exit(1);
			}
		}
		for (j = 0; j < height; j++)
		{
			for (k = 0; k < width; k++)
			{
				i[j][k] = 0;
			}
		}
		return (i);
	}
}
