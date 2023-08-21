#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destine
 * @src: source
 * @n: bytes
 *
 * Return: string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, dest_len;

	index = 0;
	dest_len = _strlen(dest);

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
