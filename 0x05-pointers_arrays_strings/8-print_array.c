#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n elements of an array of integers
 *
 * @a: Array
 * @n: The number of elements of the array to be printed
 *
 */

void print_array(int *a, int n)
{
	int *t = a, c = 0;

	for (; *t != '\0'; ++c, t++)
	{
		if (c <= n - 1)
		{
			printf("%d", *(a + c));
			if (c != n - 1)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
}
