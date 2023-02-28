#include "main.h"

/**
 * _strcpy - Check the code.
 * Descriprion: 'Copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.'
 * @dest: is a string.
 * @src: is a string.
 * Return value: the pointer to dest.
 */

char _strcpy(char *dest, char *src)
{
	*dest = *src;
	return (dest);
}
