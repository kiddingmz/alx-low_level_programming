#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i = 122;

	for (; i >= 97;)
		putchar(i--);

	putchar('\n');

	return (0);
}
