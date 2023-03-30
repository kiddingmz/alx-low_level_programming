#include "main.h"

/**
 * _strncat - Concatenates two string contains n or more bytes
 *
 * @dest: Destine
 * @src: Source
 * @n: Bytes
 *
 * Return: char*
 */

char *_strncat(char *dest, char *src, int n)
{
	char *t = dest;
	int c = 0, i;

	while (*t != '\0')
	{
		c++;
		t++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i + c] = *(src + i);
	return (dest);
}
