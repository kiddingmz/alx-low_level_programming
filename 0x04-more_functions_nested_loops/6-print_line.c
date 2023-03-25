#include "main.h"

/**
 * print_line - Draw a straight line
 *
 * @n: Integer
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
			_putchar(95);
		_putchar('\n');
	}
}
