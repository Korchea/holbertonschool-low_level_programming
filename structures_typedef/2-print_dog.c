#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Check the code.
 * Description: 'Prints a struct dog.'
 * @d: Is a struct.
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)");
		}
		if (d->age > 0)
		{
			printf("Age: %f\n", d->age);
		}
		else
		{
			printf("(nil)");
		}
		if (d->owner != NULL)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("(nil)");
		}
	}
}
