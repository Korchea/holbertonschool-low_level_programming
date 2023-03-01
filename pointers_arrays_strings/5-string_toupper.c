#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Check the code.
 * Description: 'Changes all lowercase letters of a string to uppercase.'
 * @s: is a string.
 * Return: s.
 */

char *string_toupper(char *s)
{
	int i;
	char j;

	i = 0;
	while (*(s + i) != '\0')
	{
		j = *(s + i);
		*(s + i) = toupper(j);
		i++;
	}
	return (s);
}
