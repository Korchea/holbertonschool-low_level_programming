#include "main.h"

/**
 * print_rev - Check the code.
 * Description: 'Prints a string, in reverse, followed by a new line.'
 * @s: is a string.
 */

void print_rev(char *s)
{
	int i;

	for (i = (_strlen(s) + 1); i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
