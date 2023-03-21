#include "main.h"

/**
 * jack_bauer - Print minutes
 *
 */

void jack_bauer(void)
{
	int h;
	int sh;
	int m;
	int s;

	for (h = 0; h <= 2; h++)
	{
		for (sh = 0; sh <= 9; sh++)
		{
			for (m = 0; m <= 5; m++)
			{
				for (s = 0; s <= 9; s++)
				{
					_putchar('0' + h);
					_putchar('0' + sh);
					_putchar(':');
					_putchar('0' + m);
					_putchar('0' + s);
					_putchar('\n');
					if (s == 9 && m == 5 && sh == 3 && h == 2)
						s = m = sh = h = 10;
				}
			}
		}
	}
}
