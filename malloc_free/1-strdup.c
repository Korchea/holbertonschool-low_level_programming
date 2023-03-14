#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Check the code.
 * Description: 'Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as  parameter.'
 * @str: Is a string.
 * Return: NULL if str = NULL or if insufficient memory was availble,
 * else a pointer to the duplicate string.
 */

char *_strdup(char *str)
{
	int i, k;
	char *j;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			i++;
		}
		j = malloc(sizeof(char) * (i + 1));
		if (j == NULL)
		{
			exit(1);
		}
		for (k = 0; k < i + 1; k++)
		{
			j[k] = str[k];
		}
		return (j);
	}
}
