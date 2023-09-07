#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: min value of integers.
 * @max: maximum value of integers.
 * Return: pointer to newly created array.If min > max, malloc fails; NULL.
 */

int *array_range(int min, int max)
{
	int x = 0;
	int s;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	s = max - min + 1;

	array = (int *)malloc(s * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	while (x < s)
	{
		array[x] = min + x;
		x++;
	}
	return (array);
}
