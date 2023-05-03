#include "main.h"

/**
 * _strchr - localization a character in a string
 *
 * @s: string
 * @c: character
 *
 * Return: string
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return ('\0');
}
