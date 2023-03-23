#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - 'Prints numbers, followed ny a new line.'
 * @separator: Is a string to be printed between numbers.
 * @n: Is the number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	if (n == 0)
	{
		printf("\n");
	}
	for (i = 0; i < n; i++)
	{
		if (separator == NULL && i < n - 1)
		{
			printf("%d", va_arg(ap, int));
		}
		else
		{
			if (i < n - 1)
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
			else
			{
				printf("%d\n", va_arg(ap, int));
			}
		}
	}
	va_end(ap);
}
