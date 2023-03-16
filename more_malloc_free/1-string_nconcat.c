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
	unsigned int j, k, l, m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	k = 0;
	j = 0;
	while (s1[k] != '\0')
	{
		k++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (j < n)
	{
		l = k + j;
	}
	else
	{
		l = k + n;
	}
	i = malloc(sizeof(char) * l + 1);
	if (i == NULL)
	{
		free(i);
		return (NULL);
	}
	for (m = 0; m < l; m++)
	{
		if (m < k)
		{
			i[m] = s1[m];
		}
		else
		{
			i[m] = s2[m - k];
		}
	}
	/*i[m] = '\0';*/
	return (i);
}
