#include "main.h"

/**
 * _abs - Entry point
 * @i: is an int
 * Description: 'Computes the absolute value of an integer.'
 * Return: Always 0 (Success)
 */

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
