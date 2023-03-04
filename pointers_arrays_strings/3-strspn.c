#include "main.h"

/**
 * _strspn - Check the code.
 * Description: 'Gets the length of a substring.'
 * @s: is a string.
 * @accept: is a string.
 * Return: The number of bytes in the initial segment of s which
 * consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	i = 0;
	while (*(s + i) != '\0')
	{
		count = 1;
		j = 0;
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				count = 0;
				break;
			}
			j++;
		}
		if (count == 1)
		{
			break;
		}
		i++;
	}
	return (i);
}
