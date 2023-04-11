#include "main.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: vetor of string
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	char *arg;
	int i;

	while (argc--)
	{
		arg = *argv++;
		i = 0;
		while (arg[i] != '\0')
			_putchar(arg[i++]);
		_putchar('\n');
	}
	return (0);
}
