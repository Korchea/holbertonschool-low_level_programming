#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints the alphabet in lowercase
 * and uppercase, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i > 96 && i < 123)
		{
			putchar(i);
		}
	}
	for (i = 65; i < 91; i++)
	{
		if (i > 64 && i < 91)
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
