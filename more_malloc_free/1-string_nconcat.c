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
	int j, k, q;

	if (s1 == NULL)
	{
		s1[0] = ' ';
	}
	if (s2 == NULL)
	{
		s2[0] = ' ';
	}
	k = strlen(s1);
	q = strlen(s2);
	i = malloc(k + q + 1);
	if (i == NULL)
	{
		exit(1);
	}
	for (j = 0; j < k; j++)
	{
		i[j] = s1[j];
	}
	strncat(i, s2, n);
	return (i);
}
