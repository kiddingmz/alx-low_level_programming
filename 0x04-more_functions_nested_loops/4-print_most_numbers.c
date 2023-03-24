#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9 except 2 and 4
 */

void print_most_numbers(void)
{
	int c = 48;

	for (; c <= 57; c++)
	{
		if (c != 50 && c != 52)
			_putchar(c);
	}
	_putchar('\n');
}
