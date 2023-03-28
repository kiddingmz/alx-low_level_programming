#include "main.h"

/**
 * _puts - Print string
 *
 * @str: String
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
