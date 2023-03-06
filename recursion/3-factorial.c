#include "main.h"

/**
 * factorial - Check the code.
 * Description: 'Returns the factorial of a given number.'
 * @n: Is an integer.
 * Return: If n is lower then 0; the function should return -1
 * to indicate an error.
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (0);
}
