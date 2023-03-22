#include "function_pointers.h"

/**
 * int_index - Check the code.
 * Description: 'Searches for an integer.'
 * @array: Is an array of integers.
 * @size: Is an integer.
 * @cmp: Is a pointer to a function that returns an integer.
 * Return: The index of the first element for which the cmd
 * function does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i <= size; )
		{
			if (cmp(array[i]) != 0)
			{
				break;
			}
			i++;
		}
		if (i <= size)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (-1);
}
