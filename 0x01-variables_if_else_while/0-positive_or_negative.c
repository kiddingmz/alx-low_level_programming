#include<stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	long int n;

	scanf("%ld", &n);

	if (n == 0)
	{
		printf("%ld is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%ld is negative\n", n);
	}
	else
	{
		printf("%ld is positive\n", n);
	}

	return (0);
}
