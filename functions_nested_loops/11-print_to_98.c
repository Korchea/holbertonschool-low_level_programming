#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Entry point
 * Description: 'Prints all natural numbers from n to 98,
 * followed by a new line.'
 * @n: is an int
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 99; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (; n > 97; n--)
		{
			printf("%d, ", n);
		}
	}
	_putchar('\n');
}
