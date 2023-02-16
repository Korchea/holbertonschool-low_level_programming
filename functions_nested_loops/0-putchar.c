#include <stdio.h>

/**
 * main - Entry point
 * Description: 'Prints _putchar, followed by a new line.'
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(a[i]);
	}
	putchar('\n');
	return (0);
}
