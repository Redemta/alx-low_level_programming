#include "main.h"

/**
 * puts2 - every other character of string, starting with first character.
 * @str: char value
 * Return: Always 0
 */

void puts2(char *str)
{
	int x;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (x = 0; x < length; x += 2)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
