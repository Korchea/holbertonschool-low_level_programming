#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - 'Prints strings, followed by a new line.'
 * @separator: Is the string to be printed between the strings.
 * @n: Is the number of strings passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *j;

	va_start(ap, n);

	if (n == 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		j = va_arg(ap, char *);
		if (j == NULL)
		{
			j = "(nil)";
		}
		if (separator == NULL && i < n - 1)
		{
			printf("%s", j);
		}
		else
		{
			if (i < n - 1)
			{
				printf("%s%s", j, separator);
			}
			else
			{
				printf("%s\n", j);
			}
		}
	}
	va_end(ap);
}
