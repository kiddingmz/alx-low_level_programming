#include "main.h"

/**
 * _memset - Fill memory with a constant byte
 *
 * @s: String
 * @b: Char
 * @n: Integer
 *
 * Return: String
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		s[c] = b;
	
	return (s);
}
