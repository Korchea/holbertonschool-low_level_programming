#include "main.h"

/**
 * main - 'Copies the content of a file to another file.'
 * @argc: Is the number of arguments.
 * @argv: They are the arguments.
 * Return: 0 if nothing go wrong, else the error number.
 */

int main(int argc, char *argv[])
{
	int from = 0, to = 0, r = 0, w = 0, c = 0;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from = open(argv[1], O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}
	to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	if(to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	r = 1024;
	while (r == 1024)
	{
		r = read(from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(to, buf, r);
		if (w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write tp %s\n", argv[2]);
			exit(99);
		}
	}
	c = close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", from);
		exit(100);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	free(buf);
	return (0);
}
