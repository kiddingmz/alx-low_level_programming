#include "main.h"

/**
 * puts2 - Print even position
 *
 * @str: String
 *
 */

void puts2(char *str)
{
	char *t = str;
	int c = 0;

	for (; *t != '\0'; c++, t++)
	{
		if (c % 2 == 0)
			_putchar(*t);
	}
	_putchar('\n');
}
