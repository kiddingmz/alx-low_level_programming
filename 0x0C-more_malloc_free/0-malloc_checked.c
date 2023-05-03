#include "main.h"

/**
 * malloc_checked - using malloc to allocate memory
 * @b: int
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *c = malloc(b);

	if (c == NULL)
		exit(98);
	return (c);
}
