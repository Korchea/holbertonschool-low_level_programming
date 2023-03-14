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
	long unsigned int j;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		i = malloc(sizeof(s1) + sizeof(s2) + 1);
		if (i == NULL)
		{
			exit(1);
		}
		for (j = 0; j < sizeof(s1); j++)
		{
			i[j] = s1[j];
		}
		strncat(i, s2, n);
		return (i);
	}
}
