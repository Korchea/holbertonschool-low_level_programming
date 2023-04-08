#include "main.h"

/**
 * get_bit - 'Returns the value ofa bit at a given index.'
 * @n: Is a number.
 * @index: Is the index.
 * Return: The value of the bit at index or -1 if an error occured.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	for (i = 0; i < index; i++)
		if (n >> 1)
			n = n >> 1;
		else
			break;
	return (n & 1);
}
