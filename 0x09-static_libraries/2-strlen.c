#include "main.h"

/**
 * _strlen - function that returns length of a string.
 * @s: string character
 * Return: length
 */

int _strlen(char *s)
{
	int length;

	length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
