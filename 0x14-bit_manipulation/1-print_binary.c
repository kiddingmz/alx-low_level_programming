#include "main.h"
#include <stdio.h>

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

	i = 63;
	c = 0;
	while (i--)
	{
		decimal = n >> i;
		if (decimal & 1)
		{
			putchar('1');
			c++;
		}
		else if (decimal)
			putchar('0');
	}
	if (!c)
		putchar('0');
}	
