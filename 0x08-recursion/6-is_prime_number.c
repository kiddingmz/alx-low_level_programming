#include "main.h"

/**
 * is_prime - prime number
 *
 * @n: first param
 * @c: iteraotr
 *
 * Return: unsigned int
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, c + 1));
}

/**
 * is_prime_number - check prime number
 *
 * @n: input number
 *
 * Return: int
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
