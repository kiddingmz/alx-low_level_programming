#include "main.h"

/**
 * string_toupper - change all lowercase letters of a string to  uppercase.
 *
 * @n: string
 *
 * Return: char*
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 97 && n[i] <= 122)
			n[i] = n[i] - 32;
		i++;
	}

	return (n);
}
