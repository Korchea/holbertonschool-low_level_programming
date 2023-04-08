#include "main.h"

/**
 * clear_bit - 'Sets the value of a bit to 0 at a given index.'
 * @n: Is a number.
 * @index: Is the index.
 * Return: 1 if it worked, or -1 if an error ocurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (*n & (1 << index))
		*n = *n ^ (1 << index);
	return (1);
}
