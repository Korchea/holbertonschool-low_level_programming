#include "main.h"

/**
 * _sqrt - Check the code.
 * Description: 'If is bigger than 0 do the squertroot.'
 * @n: Is an integer.
 * @i: Is an integer equal or bigger than 2.
 * Return: The value of the sqrt.
 */

int _sqrt(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Check the code.
 * Description: 'Returns the natural square root of a number.'
 * @n: Is an integer.
 * Return: The square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt(n, 2));
}
