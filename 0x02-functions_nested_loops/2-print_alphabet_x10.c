#include "main.h"

/**
 * print_alphabet_x10 - This function print the alphabet x10
 *
 */

void print_alphabet_x10(void)
{
	int i = 10;
	int c;

	while (i-- > 0)
	{
		c = 97;
		while (c <= 122)
			_putchar(c++);
		_putchar('\n');
	}
}
