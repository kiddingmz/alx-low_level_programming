#include "main.h"

/**
 * reverse_array - Reverses the content of an array integers
 *
 * @a: Array of integers
 * @n: Number of elements of the array
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int s = -1, aux;

	while (++s < --n)
	{
		aux = a[n];
		a[n] = a[s];
		a[s] = aux;
	}
}
