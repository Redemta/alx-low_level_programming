#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index.
 * @n: pointer to the number to set the bit.
 * @index: index of the bit to set.
 *
 * Return: 1 if works, -1 if error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitVal;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bitVal = 1UL << index;

	*n = *n | bitVal;

	return (1);
}
