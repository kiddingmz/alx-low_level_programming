#include "main.h"

/**
 * _strcat - append a string
 *
 * @dest: destine
 * @src: source
 *
 * Return: string
 */

char *_strcat(char *dest, char *src)
{
	size_t i, n, d;

	d = _strlen(dest);
	n = _strlen(src);
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[d++] = src[i];
	dest[d] = '\0';
	return (dest);
}

