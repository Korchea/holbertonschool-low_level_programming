#include "search_algos.h"

/**
 * print_array - 'Prints an array of integers.'
 * @array: The array to be printed.
 * @size: Number of elements in @array.
 * @from: Number of the first element to print.
 */

void print_array(const int *array, size_t size, int from)
{
	size_t i = from, j = from;

	size += j;
	printf("Searching in array: ");
	while (array && i < size)
	{
		if (i > j)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}

/**
 * binary_search - 'Searches for a value in an array of
 * integers using the Binary search algorithm.'
 * @array: Is a pointer to the first element of the array to search in.
 * @size: Is the number of elements in array.
 * @value: Is the value to search for.
 * Return: The first index where value is located.
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid = 0;

	if (!array)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		print_array(array, right - left + 1, left);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
