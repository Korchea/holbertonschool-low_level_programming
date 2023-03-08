#include "main.h"
#include <string.h>
/**
 * _strcat - Check the code.
 * Description: 'Concatenate two strings.'
 * @dest: is a string.
 * @src: is a string.
 * Return: dest.
 */

char *_strcat(char *dest, char *src)
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
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
