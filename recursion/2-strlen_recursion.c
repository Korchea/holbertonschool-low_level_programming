#include "main.h"

/**
 * _strlen_recursion - Check the code.
 * Description: 'Returns the length of a string.'
 * @s: Is a string.
 * Return: Number of characters.
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
