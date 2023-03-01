#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strcmp - Check the code.
 * Description: 'Compares two strings.'
 * @s1: is a string.
 * @s2: is a string.
 * Return: an integer.
 */

int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (j == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
		{
			break;
		}
		j = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (j);
	}
