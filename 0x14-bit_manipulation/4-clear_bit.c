#include "main.h"

/**
 * clear_bit - sets value of a bit
 *
 * @n: first param
 * @index: index
 *
 * Return: 1 if worked or -1 error ocurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
	return (1);
}
