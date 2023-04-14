#include "main.h"

/**
 * append_text_to_file - 'Appends text at the end of a file.'
 * @filename: Is the name of the file to append.
 * @text_content: Is the text to append.
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int len = 0, txt = 0, cont = 0;

	if (filename == NULL)
		return (-1);
	while (text_content[len] != '\0')
		len++;
	txt = open(filename, O_EXCL | O_RDONLY | O_WRONLY);
	if (txt == -1)
		return (-1);
	cont = write(txt, text_content, len);
	if (cont == -1)
		return (-1);
	close(txt);
	return (1);
}
