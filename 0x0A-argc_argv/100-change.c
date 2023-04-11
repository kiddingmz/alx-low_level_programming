#include <stdio.h>
#include <stdlib.h>

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
	int c, coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		c = atoi(argv[1]);
		while (c > 0)
		{
			if (c >= 25)
				c -= 25;
			else if (c >= 10)
				c -= 10;
			else if (c >= 5)
				c -= 5;
			else if (c >= 2)
				c -= 2;
			else if (c >= 1)
				c -= 1;
			coins += 1;
		}
	}
	printf("%d\n", coins);
	return (0);
}
