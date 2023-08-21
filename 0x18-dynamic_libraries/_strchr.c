#include "main.h"

/**
 * _strchr - locate the cha rinto string
 *
 * @s: string
 * @c: char
 *
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
