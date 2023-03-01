#include "main.h"

/**
 * reverse_array - Check the code.
 * Description: 'Reverses the content of an array of integers.'
 * @a: is an array.
 * @n: is an integer.
 */

void reverse_array(int *a, int n)
{
	int i, j, b[n];

	i = n;
	j = 0;
	while (i >= 0)
	{
		*(b + j) = *(a + i);
		j++;
		i--;
	}
	*a = *b;
}
