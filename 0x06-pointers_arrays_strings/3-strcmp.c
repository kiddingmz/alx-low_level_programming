#include "main.h"

/**
 * _strcmp - Compare two strings
 *
 * @s1: First string
 * @s2: Second string
 *
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0, c = 0, ls1 = 0, ls2 = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if (s1[i] == s2[i])
			c++;
		else if (s1[i] > s2[j])
			ls1++;
		else if (s2[i] > s1[j])
			ls2++;
		i++;
		j++;
	}

	if (c == i && c == j)
		return (0);
	else if (ls1 > ls2)
		return (15);
	else
		return (-15);
}
