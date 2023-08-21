#include "main.h"

/**
 * print_rev - print strin in reverse, followed by a new line.
 * @s: char value
 * Return: Always 0
 */

void print_rev(char *s)
{
	int x;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	for (x--; x >= 0; x--)
	{
		_putchar(s[x]);
	}
	_putchar('\n');
}
