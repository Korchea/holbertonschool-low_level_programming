#include "main.h"

/**
 * _strcpy - Check the code.
 * Descriprion: 'Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.'
 * @dest: is a string.
 * @src: is a string.
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	while (i >= 0)
	{
		*(dest + i) = *(src + i);
		if (*(dest + i) == '\0')
		{
			break;
		}
	}
	return (dest);
}
