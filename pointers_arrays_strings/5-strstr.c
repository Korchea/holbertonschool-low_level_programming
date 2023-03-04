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
	int i, j, h, size1 = strlen(haystack), size2 = strlen(needle);
	char *k = NULL;
	int a;

	for (i = 0; i < size1; i++)
	{
		a = 0;
		j = 0;
		h = i;
		if (*(haystack + h) == *(needle + j) && a == 0)
		{
			for (j = 0; j < size2; j++)
			{
				if (*(haystack + h) != *(needle + j))
				{
					break;
				}
				if (j == size2 - 1)
				{
					*k += *(haystack + i);
					a = 1;
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
		return (k);
	}
}
