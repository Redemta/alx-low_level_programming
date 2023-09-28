#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: Number to be printed in binary.
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;

	for (i = sizeof(n) * 8 - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count > 0)
		{
			_putchar('0');
		}
	}
	if (count == 0)
	{
		_putchar('0');
	}
}
