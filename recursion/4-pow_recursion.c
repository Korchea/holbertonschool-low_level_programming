#include "main.h"

/**
 * _pow_recursion - Check the code.
 * Description: 'Returns the value of x raised to the power of y.'
 * @x: Is an integer.
 * @y: Is an integer.
 * Return: If y is lower than 0, the function should return -1,
 * else returns the raised of x.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	if (y == 0)
	{
		return (1);
	}
	return (0);
}
