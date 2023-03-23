#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Check the code.
 * Description: 'Creates a new dog.'
 * @name: Is a string.
 * @age: Is a float.
 * @owner: Is a string.
 * Return: A new dog struct.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	d->name = malloc(sizeof(char *) * strlen(name) + 1);
	d->owner = malloc(sizeof(char *) * strlen(owner) + 1);
	if (d->owner == NULL || d->name == NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (NULL);
	}
	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = strcpy(d->owner, owner);
	return (d);
}
