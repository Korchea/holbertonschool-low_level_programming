#include "main.h"

/**
 * print_rev - Check the code.
 * Description: 'Prints a string, in reverse, followed by a new line.'
 * @s: is a string.
 */

void print_rev(char *s)
{
	int i;

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
	i--;
	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
