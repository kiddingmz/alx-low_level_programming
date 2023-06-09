#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: integer
 *
 * Return: unsigned int
 *
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
