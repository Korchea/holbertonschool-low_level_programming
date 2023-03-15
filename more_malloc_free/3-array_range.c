#include "main.h"
#include <stdlib.h>

/**
 * array_range - Check the code.
 * Description: 'Creates an array of integer.'
 * @min: Is an integer.
 * @max: Is an integer.
 * Return: A pointer to the newly created array, else NULL.
 */

int *array_range(int min, int max)
{
	int *i, j;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		i = malloc(sizeof(int) * (max - min + 1));
		if (i == NULL)
		{
			exit(1);
		}
		for (j = 0; min <= max; j++)
		{
			i[j] = min;
			min++;
		}
		return (i);
	}
}
