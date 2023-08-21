#include "main.h"

/**
 * _isupper - uppercase character
 *
 * @c: input
 *
 * Return: int
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
