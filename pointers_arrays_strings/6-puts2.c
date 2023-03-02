#include "main.h"

/**
 * puts2 - Check the code.
 * Description: 'Prints every other character of a string,
 * starting with the first character, followed by a new line.'
 * @str: is a string.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
