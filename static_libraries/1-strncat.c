#include "main.h"

/**
 * _strncat - Check the code.
 * Descripion: 'Concatenate two strings.'
 * @dest: is a string.
 * @src: is a string.
 * @n: is an int.
 * Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
	{
		if (n == 0)
		{
			break;
		}
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		if (j > (n - 2))
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
