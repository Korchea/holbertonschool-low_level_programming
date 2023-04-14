#include "main.h"

/**
 * create_file - 'Creates a file.'
 * @filename: Is the name of a file.
 * @text_content: Is the text to input.
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int len = 0, file = 0, cont = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	file = open(filename, O_CREAT | O_RDWR, 0600);
	if (file == -1)
		return (-1);
	cont = write(file, text_content, len);
	if (cont == -1)
		return (-1);
	close (file);
	return (1);
}
