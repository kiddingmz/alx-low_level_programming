#include "main.h"

/**
 * positive_or_negative - Print numbers
 *
 */

void positive_or_negative(int n)
{
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
	{
		printf("%d is positive\n", n);
	}
}
