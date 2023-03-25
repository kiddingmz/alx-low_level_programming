#include "main.h"

/**
 * print_diagonal - Draw a diagonal line
 *
 * @n: Integer
 *
 */

void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			if (i == j)
			{
				_putchar(92);
				break;
			}
			_putchar(' ');
		}
		_putchar('\n');
	}
}
