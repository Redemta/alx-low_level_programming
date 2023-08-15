#include "main.h"

/**
 * print_alphabet_x10: print the alphabet in lowercase.
 *
 * Return: 1 on success
 */

void print_alphabet_x10(void)
{
	int i, counter = 0;

	while (counter < 10)
	{
		for (i = 'a'; i <= 'i'; i++)
		{
			_putchar(i);
		}
		counter++;
		_putchar('\n');
	}
}
