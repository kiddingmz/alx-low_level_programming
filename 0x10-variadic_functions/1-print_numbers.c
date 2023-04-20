#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - print numbers
 *
 * @separator: separator
 * @n: limit
 * @...: more params
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(op, int));

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(op);
	putchar('\n');
}
