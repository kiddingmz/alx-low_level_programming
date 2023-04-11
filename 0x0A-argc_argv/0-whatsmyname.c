#include "main.h"

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: vetor of string
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *arg = argv[argc - argc];
	int i;

	for (i = 0; arg[i] != '\0'; i++)
		_putchar(arg[i]);

	_putchar('\n');
	return (0);
}
