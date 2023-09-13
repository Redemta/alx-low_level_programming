#include "function_pointers.h"

/**
 * int_index - function taht searches for an integer.
 * @array: pointer to the array of integers.
 * @size: int representing no of elements in array.
 * @cmp: pointer to function to compare values in array.
 * Return: index of 1st element which cmp does not return 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	while (i < size)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
