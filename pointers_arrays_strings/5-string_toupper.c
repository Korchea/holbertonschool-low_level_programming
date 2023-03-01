#include "main.h"
#include <ctype.h>

/**
 *
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
