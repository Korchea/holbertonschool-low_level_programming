#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: 'Prints the alphabet, in lowercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
