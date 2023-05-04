#include "main.h"

/**
 *
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, c;
	unsigned long int bit, e;

	c = 0;
	i = 63;
	e = n ^ m;
	while (i--)
	{
		bit= e >> i;
		if (bit & 1)
			c++;
	}
	return (c);
}
