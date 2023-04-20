#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum the all numbers
 *
 * @n: firt integer
 * @...: any params
 *
 * Return: 0 or unsigned int
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list op;
	unsigned int sum;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(op, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(op, int);
	va_end(op);

	return (sum);
}

