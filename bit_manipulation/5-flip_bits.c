#include "main.h"

/**
 * flip_bits - 'Returns the number of bits you would need to get
 * from one number to another.'
 * @n: Is a number.
 * @m: Is a number.
 * Return: The number of bits you would need to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int xor = n ^ m;

	while (xor > 0)
	{
		flip += xor & 1;
		xor = xor >> 1;
	}
	return (flip);
}
