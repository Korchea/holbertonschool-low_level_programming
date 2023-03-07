#include <stdio.h>
#include <stdlib.h>

/**
 * main - Check the code.
 * Description: 'Multiplies two numbers.'
 * Return: 1.
 */

int main(int argc, char *argv[])
{
	int i, j;
	char *k;

	k = NULL;
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = strtol(argv[1], &k, 10);
		j = strtol(argv[2], &k, 10);
		printf("%d\n", i * j);
		return (0);
	}
}
