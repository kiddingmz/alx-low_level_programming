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
	ssize_t w;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_TRUNC, S_IRUSR | O_WRONLY | S_IWUSR);
	if (file == -1)
		return (-1);
	w = write(file, text_content, sizeof(text_content) - 1);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}

