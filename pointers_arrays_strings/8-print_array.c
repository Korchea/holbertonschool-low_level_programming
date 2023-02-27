#include "main.h"

/**
 * print_array - Check the code.
 * Description: 'Prints n elements of an array of integer,
 * followed by a new line.'
 * @a: is an integer.
 * @n: is an integer.
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[0]);
		}
		else
		{
			printf(", %d", a[i]);
		}
	}
	printf("\n");
}
