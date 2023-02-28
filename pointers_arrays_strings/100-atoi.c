#include "main.h"
#include <string.h>

/**
 * _atoi - Check the code.
 * @s: is a string.
 * Return: n.
 *
 * ctoi - char to int.
 * Description ctoi: 'Char to int.'
 * @c: char to convert.
 * ctoi return: an int.
 */

int ctoi(char c)
{
	int i = (int)c;

	return (i - '0');
}

int _atoi(char *s)
{
	unsigned int i, n = 0;
	unsigned int min = 0;
	unsigned int len = strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			min++;
		}
		if (s[i] > 47 && s[i] < 58)
		{
			break;
		}
	}
	while (s[i] > 47 && s[i] < 58)
	{
		n *= 10;
		n += ctoi(s[i]);
		i++;
	}
	if (min % 2 == 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}
