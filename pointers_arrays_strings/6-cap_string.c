#include "main.h"
#include <ctype.h>

/**
 * cap_string -Check the code.
 * Decription: 'Capitalizes all words of a string.'
 * @s: is a string.
 * Return: s.
 */

char *cap_string(char *s)
{
	int i;
	char j, k;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = *(s + i);
		if (i == 0)
		{
			*(s + i) = toupper(j);
		}
		else
		{
			k = *(s + (i - 1));
			if (k == 9 || k == 44 || k == 46 || k == 59 ||
					k == 63 || (k >= 32 && k <= 34) ||
					k == 40 || k == 41 || k == 123 ||
					k == 125 || k == '\n')
			{
				*(s + i) = toupper(j);
			}
		}
		i++;
	}
	return (s);
}
