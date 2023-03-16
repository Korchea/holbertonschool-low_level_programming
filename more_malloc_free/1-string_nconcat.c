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
	if (j <= n)
	{
		l = k + j;
	}
	else
	{
		l = k + n;
	}
	i = malloc(sizeof(char) * (l + 1));
	if (i == NULL)
	{
		return (NULL);
	}
	strcat(i, s1);
	strncat(i, s2, n);
	i[l] = '\0';
	return (i);
}
