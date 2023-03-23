#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Check the code.
 * Description: 'Returns the sum of all its parameters.'
 * @n: Is a positive integer.
 * Return: The sum of all n's.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, j;

	va_start(ap, n);

	j = 0;
	for (i = 0; i < n; i++)
	{
		j += va_arg(ap, int);
	}
	va_end(ap);
	return (j);
}
