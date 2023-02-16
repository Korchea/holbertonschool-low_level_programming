#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: 'prints 10 times the alphabet, in
 * lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 97; j < 123; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
