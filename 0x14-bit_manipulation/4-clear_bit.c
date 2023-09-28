#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the number in which to clear the bit.
 * @index: index of the bit to clear.
 *
 * Return: 1 if works, -1 if error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bin_num;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	bin_num = ~(1UL << index);

	*n = *n & bin_num;

	return (1);
}
