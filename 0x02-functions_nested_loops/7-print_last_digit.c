#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @p: character to check
 * Return: value of last digit
 */

int print_last_digit(int p)

{
	int last;

	last = p % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
