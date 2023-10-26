#include "main.h"

/**
 * flip_bits - number of bits needed to flip to get from one number to another
 * @n: number one.
 * @m: number two.
 *
 * Return: The number of bits used.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int num = 0;
	unsigned long int result = n ^ m;

	while (result > 0)
	{
		num += result & 1;
		result >>= 1;
	}
	return (num);
}
