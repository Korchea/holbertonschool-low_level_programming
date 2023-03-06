#include "main.h"

/**
 * _print_rev_recursion - Check the code.
 * Description: 'Prints a string in reverse.'
 * @s: is a string.
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
