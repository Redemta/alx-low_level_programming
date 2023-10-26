#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: integer argument.
 * @index: The bit index to retrieve.
 *
 * Return: value of the bit at index, -1 on error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1UL << index;

	return ((n & num) ? 1 : 0);
}
