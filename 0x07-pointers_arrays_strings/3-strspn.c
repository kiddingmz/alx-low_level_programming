#include "main.h"

/**
 * _strspn - get length
 *
 * @s: string
 * @accept: string
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, f;

	while (s[i] != '\0')
	{
		j = 0;
		f = 1;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				f = 0;
				break;
			}
			j++;
		}

		if (f == 1)
			break;
		i++;
	}

	return (i);
}
