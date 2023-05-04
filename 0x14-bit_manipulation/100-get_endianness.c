#include "main.h"

/**
 * get_endianness - endianness
 *
 * Return: 0 or 1
 */

int get_endianness(void)
{
	unsigned int i;

	i = 1;
	return (*((char *) &i));
}
