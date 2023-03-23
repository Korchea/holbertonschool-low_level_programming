#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_dog - Check the code.
 * Description: 'Frees dogs.'
 * @d: Is struct.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
