#include "main.h"

/**
 * swap_int - Swapes the values of two integers
 *
 * @a: First param
 * @b: Second param
 *
 */

void swap_int(int *a, int *b)
{
	int aux = *a;
	*a = *b;
	*b = aux;
}
