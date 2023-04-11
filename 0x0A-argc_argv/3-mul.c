#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: vetor of string
 *
 * Return: 0 - sucess or 1 - fail
 */

int main(int argc, char *argv[])
{
	long int mul;

	if (argc - 1 != 2)
	{
		putchar('E');
		putchar('r');
		putchar('r');
		putchar('o');
		putchar('r');
		putchar('\n');
		return (1);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%ld\n", mul);
	return (0);
}
