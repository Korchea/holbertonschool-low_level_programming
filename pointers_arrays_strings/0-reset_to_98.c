#include "main.h"

/**
 * reset_to_98 - check the code.
 * Desctiption: 'Takes a pointer to an int as parameter
 * and updates the value it points to 98.'
 * @n: is a pointer to a integer.
 */

void reset_to_98(int *n)
{
	printf("n=%p\n", n);
	*n = 98;
	printf("n=%p\n", n);
}
