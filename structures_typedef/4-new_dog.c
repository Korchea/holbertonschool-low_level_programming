#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
		free(d->name);
		free(d->age);
		free(d->owner);
		return (NULL);
	}
	d->name = name;
	d->owner = owner;
	d->age = age;
	n = malloc(sizeof(char *) + 1);
	if (n == NULL)
	{
		free(n);
		free(d->name);
		free(d->age);
		free(d->owner);
		return (NULL);
	}
	n = d->name;
	o = malloc(sizeof(char *) + 1);
	if (o == NULL)
	{
		free(d->name);
		free(d->age);
		free(d->owner);
		free(n);
		free(o);
		return (NULL);
	}
	o = d->owner;
	return (d);
}
