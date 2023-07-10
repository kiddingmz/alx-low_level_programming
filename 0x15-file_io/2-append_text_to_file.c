#include "main.h"

/**
 * append_text_to_file - append text to file
 *
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 sucess or -1 fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t w, wc;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);
	wc = 0;
	if (text_content != NULL)
	{
		while (text_content[wc])
			wc++;
	}
	w = write(file, text_content, wc);
	if (w == -1)
		return (-1);
	close(file);
	return (1);
}
