#include "main.h"

/**
 * print_rev - Print a string in reverse
 *
 * @s: String
 *
 */

void print_rev(char *s)
{
	int c = 0;
	char *t = s;

	/*
	 * Count number of characters
	 */
	while (*t != '\0')
	{
		c++;
		t++;
	}

	while (c--)
		_putchar(*(s + c));
	_putchar('\n');
}
