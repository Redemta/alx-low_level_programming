#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian.
 */

int get_endianness(void)
{
	char *c;
	unsigned int i = 1;

	c = (char *)&i;

	return ((int)*c);
}
