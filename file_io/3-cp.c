#include "main.h"

/**
 * error_detector - 'Detect if any error appear.'
 * @error1: Is an error flag.
 * @error2: Is an error flag.
 * @argv: Is the name of the file or the buf.
 */

void error_detector(int error1, char *argv, int error2)
{
	if (error2 == -3)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", error1);
		exit(100);
	}
	if ((argv == NULL && error2 == 1) || error1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		exit(98);
	}
	if ((argv == NULL && error2 == 2) || error1 == -2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		exit(99);
	}
}
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
	error_detector(0, argv[1], 1);
	error_detector(0, argv[2], 2);
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	from = open(argv[1], O_RDONLY);
	error_detector(from, argv[1], 0);
	to = open(argv[2], O_TRUNC | O_CREAT | O_WRONLY, 0664);
	error_detector(to * 2, argv[2], 0);
	buf = malloc(sizeof(char) * 1024);
	error_detector(0, buf, 2);
	r = 1024;
	while (r == 1024)
	{
		r = read(from, buf, 1024);
		error_detector(r, argv[1], 0);
		w = write(to, buf, r);
		error_detector(w * 2, argv[2], 0);
	}
	c = close(from);
	error_detector(from, argv[1], c * 3);
	c = close(to);
	error_detector(from, argv[1], c * 3);
	free(buf);
	return (0);
}
