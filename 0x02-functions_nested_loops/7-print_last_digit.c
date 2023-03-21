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
	int last;

	if (n < 0)
		last = (-1 * n) % 10;
	else
		last = n % 10;

	_putchar('0' + last);
	return (last);
}
