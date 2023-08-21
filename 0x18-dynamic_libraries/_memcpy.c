#include "main.h"

/**
 * _memcpy - copy bytes
 *
 * @dest: destine
 * @src: source
 * @n: bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
		dest[index] = src[index];

	return (dest);
}
