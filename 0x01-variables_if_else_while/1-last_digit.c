#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int n, d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	if (n == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else if ((n < 6) && (n != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}


	return (0);
}
