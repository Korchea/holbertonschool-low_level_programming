#include <stdio.h>

/**
 * main - Check the code.
 * Description: 'Prints all arguments it receives.'
 * @argc: is the number of arguments.
 * @argv: is the file name and the arguments.
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
