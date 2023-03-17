#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;

	for (; i <= 57;)
		putchar(i++);

	for (i = 97; i <= 102;)
		putchar(i++);

	putchar('\n');

	return (0);
}
