#include "main.h"

/**
 * binary_to_uint - convert binary to number
 *
 * @b: string
 *
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ui;
	
	if (b == ((void *)0))
		return (0);
	ui = 0;
	while (*b)
	{
		if (*b < 48 || *b > 49)
			return (0);
		ui = 2 * ui + (*b++ - '0');
	}
	return (ui);
}
