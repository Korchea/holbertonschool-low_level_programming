#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Check the code.
 * Description: 'Allocates memory using malloc.'
 * @b: Is a positive integer.
 * Return: The allocate memory.
 */

void *malloc_checked(unsigned int b)
{
	char *i;

	i = malloc(b);
	if (i == NULL)
	{
		exit(98);
	}
	return (i);
}
