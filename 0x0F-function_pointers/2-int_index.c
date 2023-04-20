#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - search for an integer
 *
 * @array: array
 * @size: size of the array
 * @cmp: function
 *
 * Return: 0, -1 or any intenger
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
		return (-1);
	}
	return (0);
}
