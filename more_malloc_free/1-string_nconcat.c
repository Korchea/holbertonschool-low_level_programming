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
	unsigned int j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	k = strlen(s1);
	j = strlen(s2);
	if (j < n)
	{
		n = j;
	}
	i = malloc(sizeof(char) * (k + n + 1));
	if (i == NULL)
	{
		exit(1);
	}
	for (l = 0; l < (k + n); l++)
	{
		if (l < k)
		{
			i[l] = s1[l];
		}
		else
		{
			i[l] = s2[l - k];
		}
	}
	return (i);
}
