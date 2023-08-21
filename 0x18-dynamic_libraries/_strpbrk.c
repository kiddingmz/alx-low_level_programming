#include "main.h"

/**
 * _strpbrk - search string
 *
 * @s: string
 * @accept: seacrh
 *
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}

	return ('\0');
}
