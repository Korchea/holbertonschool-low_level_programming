#include "main.h"

/**
 * leet - Check the code.
 * Description: 'Encodes a string into 1337.'
 * @s: is a string.
 * Return: s.
 */

char *leet(char *s)
{
	char a[5] = {65, 69, 79, 84, 76};
	char b[5] = {97, 101, 111, 116, 108};
	char c[5] = {52, 51, 48, 55, 49};
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (*(s + i) == *(a + j) || *(s + i) == *(b + j))
			{
				*(s + i) = *(c + j);
			}
		}
	}
	return (s);
}
