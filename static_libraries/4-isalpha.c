#include "main.h"

/**
 * _isalpha - Entry point
 * Description: 'Checks for alphabetic character.'*
 * Return: Always 0 (Success)
 * @c: is a character in ASCII
 */

int _isalpha(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		if (c > 96 && c < 123)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
