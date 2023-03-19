#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int j = 0;
	int k = 0;

	for (; i <= 57; i++)
	{
		for (j = i + 1; j <= 57; j++)
		{
			for (k = j + 1; k <= 57; k++)
			{	putchar(i);
				putchar(j);
				putchar(k);
				if (i != 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
