#include "main.h"

/**
 * binary_to_uint - 'Converts a binary number to an unsigned int.'
 * @b: Is the binary number in a string form.
 * Return: The converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	unsigned int i = 1, uint = 0;

	if (!b)
		return ('\0');
	while (b[len])
		len++;
	for (len--; len >= 0; len--)
	{
		if (b[len] != '1' && b[len] != '0')
			return ('\0');
		uint += (b[len] - 48) * i;
		i *= 2;
	}
	return (uint);
}
