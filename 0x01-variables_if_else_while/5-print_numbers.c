#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i = 0;

	for (; i < 10;)
	{
		printf("%d", i++);
	}

	putchar('\n');

	return (0);
}
