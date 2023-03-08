#include "main.h"

/**
 * _isdigit - check the code.
 * Description: 'Checks for a digit.'
 * @c: is a char.
 * Return: 1 if c is a digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c > 47) && (c < 58))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
