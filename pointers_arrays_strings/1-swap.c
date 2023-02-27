#include "main.h"

/**
 * swap_int - Check the code.
 * Description: 'Swap the values of two integers.'
 * @a: is an integer.
 * @b: is an integer.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
