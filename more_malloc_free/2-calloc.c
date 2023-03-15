#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Check the code.
 * Description: 'Allocates memory for an array, using malloc.'
 * @nmemb: Is an integer.
 * @size: Is the size of a char.
 * Return: A pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	unsigned int j;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	{
		i = malloc(sizeof(char) * nmemb * size);
		if (i == NULL)
		{
			exit(1);
		}
		for (j = 0; j < (nmemb * size); j++)
		{
			i[j] = 0;
		}
	}
	return (i);
}
