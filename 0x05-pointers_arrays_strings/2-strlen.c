#include "main.h"

/**
 * _strlen - Lenght of a string
 *
 * @s: string
 *
 * Return: integer
 */

int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
