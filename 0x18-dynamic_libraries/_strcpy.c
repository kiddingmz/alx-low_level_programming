#include "main.h"

/**
 * _strcpy - copy a string
 *
 * @dest: destine
 * @src: source
 *
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0 ; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
