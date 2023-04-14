#include "main.h"

/**
 * main - 'Copies the content of a file to another file.'
 * @argc: Is the number of arguments.
 * @argv: They are the arguments.
 * Return: 0 if nothing go wrong, else the error number.
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(1, "Usage: cp file_from file_to");
		exit(97);
	}
	o = open();
