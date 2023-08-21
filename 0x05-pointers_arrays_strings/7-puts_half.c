#include "main.h"

/**
 * puts_half - print half of a string, followed by a new line.
 * @str: string to check
 * Return: Always 0
 */

void puts_half(char *str)
{
	int n;
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	n = (length - 1) / 2;

	for (i = (n + 1); i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
