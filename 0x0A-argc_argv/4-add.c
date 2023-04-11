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
	long int sum;
	int i;

	sum = 0l;
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else if (argc == 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		if (atol(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if (atol(argv[i]) > 0)
			sum += atol(argv[i]);
		else
			return (1);
	}
	printf("%ld\n", sum);
	return (0);
}
