#include <stdio.h>

/**
 * main - Check the code.
 * Description: 'Prints the number of arguments passed into it.'
 * @argc: is the number of arguments.
 * @i: is a char.
 * Return: 0.
 */

int main(int argc, char *i[])
{
	*i = NULL;
	printf("%d\n", argc - 1);
	return (0);
}
