#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int val = 0x01020304;
	unsigned char *bytePtr = (unsigned char *)&val;

	if (*bytePtr == 0x01)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
