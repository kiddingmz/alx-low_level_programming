#include "main.h"

/**
 * print_square - Draw square
 *
 * @n: Integer
 *
 */

void print_square(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
			_putchar(35);
		_putchar('\n');
	}
}
