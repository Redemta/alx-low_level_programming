#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9, do not print 2 and 4
 *
 * Return: Always 0 (success)
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x <= 58; x++)
	{
		if (x != 50)
		{
			if (x != 52)
			{
				_putchar(x);
			}
		}
	}
	_putchar('\n');
}
