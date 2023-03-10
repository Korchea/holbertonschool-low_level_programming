#include "main.h"

/**
 *  * _strlen_recursion - Check the code.
 *   * Description: 'Returns the length of a string.'
 *    * @s: Is a string.
 *     * Return: Number of characters.
 *      */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}

/**
 * comp - Check te code.
 * Description: 'Compare two chars.'
 * @i: Is an integer.
 * @j: Is an integer.
 * @s: Is a string.
 * Return: 0 and 1.
 */

int comp(int i, int j, char *s)
{
	if (*(s + i) == *(s + j))
	{
		if (i != j && i != j + 1)
		{
			return (comp(i + 1, j - 1, s));
		}
		return (1);
	}
	return (0);
}

/**
 * is_palindrome - Check the code.
 * Description: 'Returns 1 if a string is a palindrome and 0 if not.'
 * @s: Is a string.
 * Return: 1 if palindrome, else 0.
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comp(0, _strlen_recursion(s) - 1, s));
}
