#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: Number fro which to get the bit.
 * @index: index of bit to retrieve.
 *
 * Return: value of bit at pecified index, -1 if error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);
	else
		return ((int)((n >> index) & 1));
}
