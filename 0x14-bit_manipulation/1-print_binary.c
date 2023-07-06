#include "main.h"

/**
 * print_binary - print binary
 *
 * @n: decimal number
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	unsigned int i, c;
	unsigned long int decimal;

	i = 64;
	c = 0;
	while (i--)
	{
		decimal = n >> i;
		if (decimal & 1)
		{
			_putchar('1');
			c++;
		}
		else if (decimal)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}
