#include "main.h"

/**
 * _islower - check the caractere is lowercase
 *
 * @c: Number to pass to _islower function
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	return (0);
}
