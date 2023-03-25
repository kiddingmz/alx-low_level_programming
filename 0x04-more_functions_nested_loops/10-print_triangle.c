#include "main.h"

/**
 * print_triangle - Print a triangle
 *
 * @size: Integer
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
		_putchar('\n');

	for (i = 1; i <= size; i++)
	{
		for (j = size; j > i; j--)
			_putchar(' ');

		for (k = 1; k <= i; k++)
			_putchar(35);
		_putchar('\n');
	}
}
