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
	int i, j, k, h;

	k = 0;
	h = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				k += *(a + i * size + j);
			}
			if ((i + j) == (size - 1))
			{
				h += *(a + i * size + j);
			}
		}
	}
	printf("%d, %d\n", k, h);
}
