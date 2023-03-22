#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Check the code.
 * Description: 'Prints a name.'
 * @name: Is a string.
 * @f: Is the style.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
	{
		f(name);
	}
}
