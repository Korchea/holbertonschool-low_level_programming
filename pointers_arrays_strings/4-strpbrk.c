#include "main.h"

/**
 * _strpbrk - Check the code.
 * Description: 'Searches a string for any of a set of bytes.'
 * @s: Is a string.
 * @accept: is a string.
 * Return: a pointer to the byte in s thet matches one of the bytes in accept,
 * or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
