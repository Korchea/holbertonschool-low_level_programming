#include "main.h"

/**
 * print_line - Check the code.
 * Description: 'Draws a straight line in the terminal.'
 * @n: is an integer.
 */

void print_line(int n)
{
	for (; n > 0; n--)
	{
		_putchar(95);
	}
	_putchar('\n');
}
