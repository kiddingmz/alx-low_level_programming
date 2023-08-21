#include "main.h"

/**
 * _strncpy - copy sting by bytes
 *
 * @dest: destine
 * @src: source
 * @n: bytes
 *
 * Return: string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index, src_len;

	index = src_len = 0;
	while (src[index++])
		src_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[index] = src[index];

	for (index = src_len; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
