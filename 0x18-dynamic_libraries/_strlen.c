#include "main.h"

/**
 * _strlen -length of string
 *
 * @str: string
 *
 * Return: unsigned int
 */

int _strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
