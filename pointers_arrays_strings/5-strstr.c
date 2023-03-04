#include "main.h"
#include <string.h>

/**
 * _strstr - Check the code.
 * Description: 'Locates a substring.'
 * @haystack: is a string.
 * @needle: is a substring.
 * Return: A pointer to the beginning of the located substring, or NULL if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, k, h, size1, size2;
       	char *q;

	q = NULL;
	size1 = strlen(haystack);
	size2 = strlen(needle);
	k = 0;
	for (i = 0; i < size1; i++)
	{
		h = i;
		j = 0;
		if (*(haystack + i) == *(needle + j) && k == 0)
		{
			for (j = 0; j < size2; j++)
			{
				if (*(haystack + h) != *(needle + j))
				{
					break;
				}
				if (j == size2 - 1)
				{
					q = &haystack[i];
					k = 1;
				}
				h++;
			}
		}
	}
	if (size2 == 0)
	{
		return (haystack);
	}
	else
	{
		return (q);
	}
}
