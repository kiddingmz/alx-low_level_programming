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
	int c;

	c  = argc - 1;
	while (argv[--argc])
		;
	_putchar('0' + c);
	_putchar('\n');
	return (0);
}
