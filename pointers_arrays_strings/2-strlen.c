#include "main.h"

/**
 * _strlen - Check the code.
 * Description: 'Returns the length of a string.'
 * @s: Is a string.
 * Return the number of characters.
 */

int _strlen(char *s)
{
	int i;

	if (s[0] != 0)
	{
		for (i = 0; ; i++)
		{
			if (s[i] == 0)
			{
				break;
			}
		}
		return (i);
	}
	else
	{
		return (0);
	}
}
