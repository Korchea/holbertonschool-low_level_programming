#include "dog.h"
#include <stdlib.h>

/**
 * create_array - Check the code.
 * Description: 'Creates a new dog.'
 * @name: Is a string.
 * @age: Is a float.
 * @owner: Is a string.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *n, *o;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
	n = malloc(sizeof(char *) + 1);
	if (n == NULL)
	{
		free(n);
		free(d);
		return (NULL);
	}
	n = d->name;
	o = malloc(sizeof(char *) + 1);
	if (o == NULL)
	{
		free(d);
		free(n);
		free(o);
		return (NULL);
	}
	o = d->owner;
	return (d);
}
