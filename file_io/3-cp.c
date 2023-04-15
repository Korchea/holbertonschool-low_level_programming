#include "main.h"

/**
 * main - 'Copies the content of a file to another file.'
 * @argc: Is the number of arguments.
 * @argv: They are the arguments.
 * Return: 0 if nothing go wrong, else the error number.
 */

int main(int argc, char *argv[])
{
	int o, r, w, c;

	if (argc != 3)
	{
		dprintf(1, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(1, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	o = open(argv[1], O_TRUNC | O_CREAT | O_RDWR, 0664);
	if (o == -1)
	{
		dprintf(1, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	r = read(o, argv[1], 1024);
	if (r == -1)
	{
		dprintf(1, "Error: Can't read from file NAME_OF_THE_FILE\n");
		exit(98);
	}
	w = write(o, argv[2], r);
	if (w == -1)
	{
		dprintf(1, "Error: Can't write to NAME_OF_THE_FILE\n");
		exit(99);
	}
	c = close(o);
	if (c == -1)
	{
		dprintf(1, "Error: Can't close fd FD_VALUE\n");
		exit(100);
	}
	return (0);
}
