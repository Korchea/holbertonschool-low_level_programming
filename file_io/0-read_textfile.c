#include "main.h"

/**
 * read_textfile - 'Reads a text file and prints it to the
 * POSIX standar output.'
 * @filename: Is the name of a file.
 * @letters: Is the number of letters it should read and print.
 * Return: The actual number of letters it coud read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *txt;
	ssize_t ps = 0;
	size_t rl = 0;
	int tr = 0;

	if (filename == NULL)
		return (0);
	tr = open(filename, O_RDONLY);
	if (tr == -1)
		return (0);
	txt = malloc(sizeof(char) * letters);
	if (txt == NULL)
		return (0);
	rl = read(tr, txt, letters);
	ps = write(STDOUT_FILENO, txt, rl);

	close(tr);
	free(txt);
	return (ps);
}
