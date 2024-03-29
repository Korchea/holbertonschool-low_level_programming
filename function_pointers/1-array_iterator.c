#include "function_pointers.h"

/**
 * array_iterator - Check the code.
 * Description: 'Executes a function given as a parameter
 * on each element of an array.'
 * @array: Is an array of integers.
 * @size: Is a struct.
 * @action: Is a function.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
