#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to check.
 * Return: Void.
 */

void print_number(int n)
{
	int i;

	if (n < 0)
	{
		_putchar('-');
		i = -n;
	}
	if (i / 10 != 0)
	{
		print_number(i / 10);
	}
	_putchar(( i % 10) + '0');
}
