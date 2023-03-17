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
	{
		putchar(i++);

		if (i != 58)
			putchar(',');

		putchar(' ');
	}

	putchar('\n');

	return (0);
}
