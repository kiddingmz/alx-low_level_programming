#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 *
 * @s: String
 *
 * Return: String
 */

char *cap_string(char *s)
{
	int j = 0;
	int c = 0;
	int cara[] = {9, 10, 123, 125, 44, 46, 59, 63, 33, 34, 40, 41, 32};

	while (s[j] != '\0')
	{
		c = 0;
		while (c <= 13)
		{
			if (s[j] == cara[c])
			{
				if (s[j + 1] >= 97 && s[j + 1] <= 122)
					s[j + 1] = s[j + 1] - 32;
			}
			c++;
		}
		j++;
	}
	return (s);
}
