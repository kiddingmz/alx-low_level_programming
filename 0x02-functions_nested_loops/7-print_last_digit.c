#include "main.h"

/**
 * print_last_digit - Print the last digit
 *
 * @n: Any integer number
 *
 * Return: integer
 *
 */

int print_last_digit(int n)
{
	if (n < 0)
		n = (-1 * n) % 10;
	else
		n = n % 10;

	_putchar('0' + n);
	return (n);
}
