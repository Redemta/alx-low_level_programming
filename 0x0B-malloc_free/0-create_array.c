#include "main.h"

/**
 * create_array - create array of chars, and initialize with specific char.
 * @size: size parameter.
 * @c: char to check.
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *)malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
