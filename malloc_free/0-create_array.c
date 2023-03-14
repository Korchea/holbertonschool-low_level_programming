#include "main.h"
#include <stdlib.h>

/**
 * create_array - Check the code.
 * Description: 'Creates an array of chars, and initializes it with a specific
 * char.'
 * @size: Is a positive integer.
 * @c: Is a character.
 * Returns: NULL if size is 0 or if it fail, else returns a pointer.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *j;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		j = malloc(sizeof(c) * size);
		if (j == NULL)
		{
			exit (1);
		}
		for (i = 0; i < size; i++)
		{
			j[i] = c;
		}
		return (j);
	}
}
