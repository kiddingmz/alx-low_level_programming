#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatenates two string
 *
 * @dest: Destine
 * @src: Source
 *
 * Return: char*
 */

char *_strcat(char *dest, char *src)
{
	char *t = dest;
	int c = 0, i;

	while (*t != '\0')
	{
		c++;
		t++;
	}

	for (i = 0; src[i] != '\0'; i++)
		dest[i + c] = *(src + i);
	return (dest);
}
