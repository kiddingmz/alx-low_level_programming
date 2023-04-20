#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - prints the number of array
 *
 * @array: array of the integer
 * @size: sizeo of the array
 * @action: function
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
