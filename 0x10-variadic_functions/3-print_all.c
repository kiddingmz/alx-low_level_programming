#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_char - print char
 *
 * @op: pointer
 *
 * Return: nothing
 */

void print_char(va_list op)
{
	char c = va_arg(op, int);

	printf("%c", c);
}

/**
 * print_int - print int
 *
 * @op: pointer
 *
 * Return: nothing
 */

void print_int(va_list op)
{
	int i = va_arg(op, int);

	printf("%d", i);
}

/**
 * print_float - print float
 *
 * @op: pointer
 *
 * Return: nothing
 */

void print_float(va_list op)
{
	float f = va_arg(op, double);

	printf("%f", f);
}

/**
 * print_string - print string
 *
 * @op: pointer
 *
 * Return: nothing
 */

void print_string(va_list op)
{
	char *c = va_arg(op, char*);

	if (c == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", c);
}

/**
 * print_all - print all
 *
 * @format: format
 * @...: more params
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list op;
	int i, j;
	char *separator;

	funcao f[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(op, format);

	i = 0;
	separator = "";
	while (format && format[i])
	{
		j = 0;
		while (j < 4 && (format[i] != *(f[j].nome)))
			j++;
		if (j < 4)
		{
			printf("%s", separator);
			f[j].function(op);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(op);
}
