#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to unsigned long int.
 * @index: The bit index to set.
 *
 * Return: 1 if successful, -1 on error.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1UL << index;
	*n |= num;

	return (1);
}
