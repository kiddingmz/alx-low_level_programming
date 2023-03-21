#include "main.h"

/**
 * print_sign - Print the sign of a number
 *
 * @n: Number passed to print_sign function
 *
 * Return: -1, 0 or 1
 */

int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('+');
		return (1);
	}
}
