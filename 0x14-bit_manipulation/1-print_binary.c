#include "main.h"

/**
 * print_binary - function that prints the binary representation of a number
 * @n: The number to be represented.
 *
 * Return: The represented binary number.
 */

void print_binary(unsigned long int n)
{
	int i = 0;
	unsigned long int num = 1UL << (sizeof(n) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (num > 0)
	{
		if (n & num)
		{
			_putchar('1');
			i = 1;
		}
		else if (i)
		{
			_putchar('0');
		}
		num >>= 1;
	}
}
