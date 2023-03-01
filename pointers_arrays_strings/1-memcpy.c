#include "main.h"

/**
 * _memcpy - Check the code.
 * Description: 'Copies memory area.'
 * @dest: is a string.
 * @src: is a string.
 * @n: is an integer.
 * Return: a poinert to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
