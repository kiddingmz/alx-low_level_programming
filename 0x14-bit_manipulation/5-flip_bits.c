#include "main.h"

/**
 * flip_bits - flip to get one number
 *
 * @n: first param
 * @m: second param
 *
 * Return: unsigned int
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, c;
	unsigned long int bit, e;

	c = 0;
	i = 64;
	e = n ^ m;
	while (i--)
	{
		bit = e >> i;
		if (bit & 1)
			c++;
	}
	return (c);
}
