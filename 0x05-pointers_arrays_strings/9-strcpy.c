#include "main.h"

/**
 * _strcpy - Copy the string pointed to by src
 *
 * @dest: Destin
 * @src: Source
 *
 * Return: String
 */

char *_strcpy(char *dest, char *src)
{
	char *s = src;
	int c = 0;

	for (; *s != '\0'; c++, s++)
		*(dest + c) = *(src + c);

	dest[c] = '\0';
	return (dest);
}
