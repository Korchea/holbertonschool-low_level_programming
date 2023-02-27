#include "main.h"

/**
 * rev_string - Check the code.
 * Description: 'Reverses a string.'
 * @s: is a string.
 */

void rev_string(char *s)
{
	int i, j;

	i = 0;
	if (s[0] != 0)
	{
		for (; ; i++)
		{
			if (s[i] == 0)
			{
				break;
			}
		}
	}
	char str[i];

	for (; i >= 0; i--)
	{
		str[j] = s[i];
		j++;
	}
	for (; i <= j; i++)
	{
		s[i] = str[i];
	}
}
