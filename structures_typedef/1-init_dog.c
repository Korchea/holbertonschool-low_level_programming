#include <stdio.h>
#include "dog.h"

/**
 * init_dog - Check the code.
 * Descriptio: 'Initialize a variable of struct dog.'
 * @d: Is a struct.
 * @name: Is string.
 * @age: Is a float.
 * @owner: Is a string.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
