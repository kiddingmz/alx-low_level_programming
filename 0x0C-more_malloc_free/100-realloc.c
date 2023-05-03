#include "main.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: function param
 * @old_size: old size
 * @new_size: new size
 *
 * Return: nothing
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *c;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return ((void *)malloc(new_size));
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	c = malloc(new_size);
	if (c == NULL)
		return (NULL);
	if (old_size > new_size)
		old_size = new_size;
	while (old_size--)
		c[old_size] = ((char *)ptr)[old_size];
	free(ptr);
	return ((void *)c);
}

