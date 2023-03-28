#include "main.h"

/**
 * rev_string - Reverse string
 *
 * @s: String
 *
 */

void rev_string(char *s)
{
	int u = -1, c = 0;
	char *t = s, n;

	while (*t != '\0')
	{
		c++;
		t++;
	}

	while (u++ < c--)
	{
		n = *(s + u);
		*(s + u) = *(s + c);
		*(s + c) = n;
	}
}
