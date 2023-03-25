#include "main.h"

/**
 * more_numbers - Print numbers from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int j;
	int c;
	int d;

	for (d = 1; d <= 10; d++)
	{
		c = 57;
		for (i = 48; i <= 49; i++)
		{
			if (i == 49)
				c = 52;

			for (j = 48; j <= c; j++)
			{
				if (i == 49)
					_putchar(i);
				_putchar(j);
			}
		}
		_putchar('\n');
	}
}
