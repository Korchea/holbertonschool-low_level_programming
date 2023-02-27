#include "main.h"

/**
 * _puts - Check the code.
 * Description: 'Prints a string, followed by a new line, to stdout.'
 * @str: is a string.
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (str[i] == 0)
		{
			break;
		}
		else
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
