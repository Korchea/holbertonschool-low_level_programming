#include "main.h"

/**
 * print_last_digit - Entry point
 * @i: is a int
 * Description: 'Prints the last digit of a number.'
 * Return: Always 0 (Success)
 */

int print_last_digit(int i)
{
	int j;

	j = i % 10;
	if (j < 0)
	{
		_putchar(-j + 48);
		return (-j);
	}
	else
	{
		_putchar(j + 48);
		return (j);
	}
}
