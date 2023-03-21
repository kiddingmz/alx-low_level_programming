#include "main.h"

/**
 * print_alphabet - print the alphabet use _putchar
 *
 */

void print_alphabet(void)
{
	int i = 97;

	for (; i <= 122;)
		_putchar(i++);
	_putchar('\n');
}
