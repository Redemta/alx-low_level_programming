#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: pointer to the unsigned long int.
 * @index: The bit index to clear.
 *
 * Return: 1 on success, -1 on error.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	num = 1UL << index;
	num = ~num;
	*n &= num;

	return (1);
}
