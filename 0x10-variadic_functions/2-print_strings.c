#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_strings - print string
 *
 * @separator: separator
 * @n: limit
 * @...: more params
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list op;

	va_start(op, n);

	for (i = 0; i < n; i++)
	{
		char *d = va_arg(op, char*);

		if (d == NULL)
			printf("(nil)");
		else
			printf("%s", d);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(op);
	putchar('\n');
}
