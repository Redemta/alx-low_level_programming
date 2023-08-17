#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: character to check
 * Return: if n is 0 or less, the function print \n
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
