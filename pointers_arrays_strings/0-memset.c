#include "main.h"

/**
 * _memset - Check the code.
 * Descrption: 'Fills memory whit a constant byte.'
 * @s: is a string.
 * @b: is a byte.
 * @n: is an int.
 * Return: a pointed to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
