#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - 'Prints anything.'
 * @format: Is a list of types of arguments passed to the function.
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	int k = 0, j = 0, m = 0;
	char *l;

	va_start(ap, format);
	while (format[k])
		k++;
	while (j < k)
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				m = 1;
				break;
			case 's':
				l = va_arg(ap, char *);
				if (l == NULL)
					l = "(nul)";
				printf("%s", l);
				m = 1;
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				m = 1;
				break;
			case 'l':
				printf("%f", va_arg(ap, double));
				m = 1;
				break;
		}
		if (j < k - 1 && m == 1)
			printf(", ");
		m = 0;
		j++;
	}
	printf("\n");
	va_end(ap);
}
