#include "main.h"

/**
 * times_table - Print the 9 times
 *
 */

void times_table(void)
{
	int row;
	int col;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0' + row);
		for(col = 0; col <= 9; col++)
		{
			_putchar('0' + col);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
