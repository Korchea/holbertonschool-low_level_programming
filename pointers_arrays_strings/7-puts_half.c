#include "main.h"

/**
 * puts_half - Check the code.
 * Description: 'Prints half of a string, followed by a new line.'
 * @str: Is a string.
 */

void puts_half(char *str)
{
	int i, n;

	i = 0;
	if (str[0] != 0)
	{
		for (; ; i++)
		{
			if (str[i] == 0)
			{
				break;
			}
		}
	}
	i--;
	if ((i % 2) != 0)
	{
		n = i / 2;
	}
	else
	{
		n = (i - 1) / 2;
	}
	n++;
	for (; n <= i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
