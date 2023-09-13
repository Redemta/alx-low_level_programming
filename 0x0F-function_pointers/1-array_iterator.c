#include "function_pointers.h"

/**
 * array_iterator - function that executes a function.
 * @array: parameter where the function will operate.
 * @size: size of the array.
 * @action: pointer to function to execute, takes int as parameter.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL || size == 0)
	{
		return;
	}
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
