#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - 'Conains the main function only.'
 * @argc: Is the number of strings.
 * @argv: I a string.
 * Return: The operation result.
 */

int main(int argc, char *argv[])
{
	char *i, *j, *k;

	i = argv[1];
	j = argv[2];
	k = argv[3];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(j) != 3 && *j != '+' && *j != '-' &&
			*j != '*' && *j != '/' && *j != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*j == '/' || *j == '%') &&
			(*i == '0' || *k == '0'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(j)(atoi(i), atoi(k)));
	return (0);
}
