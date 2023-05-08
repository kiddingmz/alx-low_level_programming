#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: file
 * @text_content: text content
 *
 * Return: 1 on sucess or -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w, wc;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (file == -1)
		return (-1);
	wc = -1;
	while (text_content != NULL && text_content[++wc] != '\0')
		;

	w = write(file, text_content, wc);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}

