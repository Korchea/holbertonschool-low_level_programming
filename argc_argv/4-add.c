#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Check the code.
 * Description: 'Adds positive numbers.'
 * @argc: Is the number of arguments.
 * @argv: They are the arguments.
 * Return: 1 if error else 0.
 */

int main(int argc, char *argv[])
{
	int i, j, h;
	char *k;

	j = 0;
	k = NULL;
	for (i = 1; i < argc; i++)
	{
		h = isalpha(*argv[i]);
		if (h > 0)
		{
			i = 0;
			break;
		}
		j += strtol(argv[i], &k, 10);
	}
	if (i == argc)
	{
		printf("%d\n", j);
		h = 0;
	}
	else
	{
		printf("Error\n");
		h = 1;
	}
	return (h);
}
