#include "main.h"

/**
 * array_range - creates array
 *
 * @min: first param
 * @max: second param
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);
	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);
	for (i = 0; min + i <= max; i++)
		arr[i] = min + i;
	return (arr);
}
