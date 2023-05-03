#include "main.h"

/**
 * _memcpy - copy memory area
 *
 * @dest: destine
 * @src: source
 * @n: unsigned int
 *
 * Return: String
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int c;

	for (c = 0; c < n; c++)
		dest[c] = src[c];
	return (dest);
}
