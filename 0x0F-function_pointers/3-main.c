#include "3-cal.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: number of params
 * @argv: params
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *c;
	int n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	c = argv[2];
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (get_op_func(c) == NULL || c[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}

	if ((*c == '/' || *c == '%') && n2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(c)(n1, n2));
	return (0);
}
