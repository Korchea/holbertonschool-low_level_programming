#include "main.h"

/**
 * _strncpy - Check the code.
 * Description: 'Copies a string.'
 * @dest: is a string.
 * @src: is a string.
 * @n: is an int.
 * Return: dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	/*i = 0;
	while (i < n)
	{
		if (*(src + i) == '\0')
		{
			for (; i <= n; i++)
			{
				*(dest + i) = '\0';
			}
			break;
		}
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
{*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest)
}
