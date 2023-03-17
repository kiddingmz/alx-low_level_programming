#include <stdio.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int d;

	for (d = 97; d <= 122; d++)
	{
		if ((d != 101) && (d != 113))
		{
			putchar(d);
		}
	}

	putchar('\n');

	return (0);
}
