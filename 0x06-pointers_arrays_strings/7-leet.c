#include "main.h"

/**
 * leet - Encodesa string
 *
 * @s: String
 *
 * Return: String
 *
 */

char *leet(char *s)
{
	int i, c = 0;
	int lcase[] = {97, 101, 111, 116, 108};
	int ucase[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0')
	{
		for (i = 0; i <= 4; i++)
		{
			if (s[c] == lcase[i] || s[c] == ucase[i])
			{
				s[c] = n[i];
				break;
			}
		}
		c++;
	}
	return (s);
}
