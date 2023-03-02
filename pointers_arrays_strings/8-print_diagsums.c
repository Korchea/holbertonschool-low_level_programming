#include "main.h"

/**
 * print_diagsums - Check the code.
 * Description: 'Prints the sum of two diagonals of a
 * square matrix of integers.'
 * @a: is a matrix of integers.
 * @size: is an integer.
 */

void print_diagsums(int *a, int size)
{
	int i, j, k;

	k = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				k += a[i][j];
			}
			else
			{
				if ((i + j) == size)
				{
					k += a[i][j];
				}
			}
		}
	}
	printf("%d\n", k);
}
