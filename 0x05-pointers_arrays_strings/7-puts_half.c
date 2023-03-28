#include "main.h"

/**
 * puts_half - Print half of a string
 *
 * @str: String
 *
 */

void puts_half(char *str)
{
	char *t = str;
	int c = 0, mid = 0;

	for (; *t != '\0'; c++, t++)
	
	mid = (c - 1) / 2 + 1;
	if ((c % 5 == 0) && !(c % 10 == 0))
		mid++;

	for (; mid < c;)
		_putchar(*(str + mid++));
	_putchar('\n');
}
