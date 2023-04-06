#include "main.h"

/**
 * _strlen_recursion - length of a string
 *
 * @s: string
 *
 * Return: unsigned int
 */

int _strlen_recursion(char *s)
{
	unsigned int i;

	i = 0;
	if (*s != '\0')
	{
		i++;
		return (i + _strlen_recursion(s + 1));
	}
	return (i);
}
