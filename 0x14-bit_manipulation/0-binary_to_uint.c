#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to the string.
 *
 * Return: converted num, 0 if there is 1 or more chars in string b.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int convNum = 0;
	char c;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		c = b[i];

		if (c != '0' && c != '1')
		{
			return (0);
		}
		convNum = convNum * 2 + (c - '0');
	}
	return (convNum);
}
