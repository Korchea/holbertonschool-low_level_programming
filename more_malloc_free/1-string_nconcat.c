#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Check the code.
 * Description: 'Concatenates two strings.'
 * @s1: Is a string.
 * @s2: Is a string.
 * @n: Is an integer.
 * Return: A string, else NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i;
	unsigned int k;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		if (s1 == NULL)
		{
			s1 = "";
		}
		if (s2 == NULL)
		{
			s2 = "";
		}
		k = strlen(s1);
		i = malloc(k + n + 1);
		if (i == NULL)
		{
			exit(1);
		}
		strcat(i, s1);
		strncat(i, s2, n);
		return (i);
	}
}
