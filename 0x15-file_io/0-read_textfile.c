#include "main.h"

/**
 * read_textfile - read text file
 *
 * @filename: filename
 * @letters: size of buffer
 *
 * Return: number of read character
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rcheck, wc;
	char *buffer;

	if (filename == NULL)
		return (0);
	
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rcheck = read(file, buffer, letters);
	if (rcheck == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, rcheck);
	if (wc == -1)
		return (0);

	free(buffer);
	close(file);
	return (wc);
}
