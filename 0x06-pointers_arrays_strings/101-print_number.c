#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to check.
 * Return: Void.
 */

void print_number(int n)
{
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n > 0)
	{
		i = i *10 + n % 10;
		n /= 10;
	}
	while (i > 0)
	{
		_putchar('0' + i % 10);
		i /= 10;
	}
}
