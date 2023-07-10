#include "main.h"

/**
 * __exit - print error
 *
 * @err: error
 * @str: file
 * @fd: fd
 *
 * Return: 0
*/

int __exit(int err, char *str, int fd)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(err);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
			exit(err);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
			exit(err);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(err);
		default:
			return (0);
	}
}

/**
 * main - entry point
 *
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int file_in, file_out;
	int read_stat, write_stat;
	int close_in, close_out;
	char buffer[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	file_in = open(argv[1], O_RDONLY);
	if (file_in == -1)
		__exit(98, argv[1], 0);

	file_out = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_out == -1)
		__exit(99, argv[2], 0);

	while ((read_stat = read(file_in, buffer, 1024)) != 0)
	{
		if (read_stat == -1)
			__exit(98, argv[1], 0);

		write_stat = write(file_out, buffer, read_stat);
		if (write_stat == -1)
			__exit(99, argv[2], 0);
	}

	close_in = close(file_in);
	if (close_in == -1)
		__exit(100, NULL, file_in);

	close_out = close(file_out);
	if (close_out == -1)
		__exit(100, NULL, file_out);

	return (0);
}
