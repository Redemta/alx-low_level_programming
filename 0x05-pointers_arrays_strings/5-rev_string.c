#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: character value
 * Return: Always 0
 */

void rev_string(char *s)
{
	int i;
	int length;
	char temp;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0; i < length / 2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
