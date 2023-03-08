#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * ischar - Check the code.
 * Description: 'Check if it is alpha.'
 * @n: is the string length.
 * @s: is the string.
 * Return: 1 if it has a char else 0.
 */

int ischar(int n, char *s)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (isalpha(s[i]) > 0)
		{
			break;
		}
	}
	if (i < n)
	{
		j = 1;
	}
	else
	{
		j = 0;
	}
	return (j);
}

/**
 * main - Check the code.
 * Description: 'Adds positive numbers.'
 * @argc: Is the number of arguments.
 * @argv: They are the arguments.
 * Return: 1 if error else 0.
 */

int main(int argc, char *argv[])
{
	int i, j, h, q;
	char *k;

	j = 0;
	k = NULL;
	for (i = 1; i < argc; i++)
	{
		q = ischar(strlen(argv[i]), argv[i]);
		if (q == 1)
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
