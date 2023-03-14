#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * str_concat - Check the code.
 * Description: 'Concatenates two strins.'
 * @s1: Is a string.
 * @s2: Is a string.
 * Return: A pointer to a newly allocated space, else NULL.
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, q;
	char *k;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}
	else
	{
		i = strlen(s1);
		j = strlen(s2);
		k = malloc(sizeof(char) * (i + j + 1));
		if (k == NULL)
		{
			exit(1);
		}
		for (q = 0; q <= i; q++)
		{
			printf("Before S2:%d\n", q);
			k[q] = s1[q];
		}
		i = j;
		j = 0;
		printf("i = %d and j = %d\n", i, j);
		for (; j <= i; q++)
		{
			printf("In S2:%d\n", q);
			k[q] = s2[j];
			j++;
		}
		return (k);
	}
}
