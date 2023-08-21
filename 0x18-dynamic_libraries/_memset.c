#include "main.h"

/**
 * _memset - initializion memory
 *
 * @s: memory area
 * @b: char to fill memory area
 * @n: bytes
 *
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		s[index] = b;

	return (s);
}
