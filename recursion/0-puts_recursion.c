#include "main.h"

/**
 * _puts_recursion - Check the code.
 * Description: 'Prints a string, followed by a new line.'
 * @s: is a string.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
