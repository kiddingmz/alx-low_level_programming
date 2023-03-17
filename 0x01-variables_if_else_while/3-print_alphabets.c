#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int c = 97;

	for (; c <= 122;)
		putchar(c++);

	for (c = 65; c <= 90; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
