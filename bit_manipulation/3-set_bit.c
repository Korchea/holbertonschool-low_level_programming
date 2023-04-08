#include "main.h"

/**
 * set_bit - 'Sets the value of a bit 1 at a given index.'
 * @n: Is a number.
 * @index: Is a index.
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
