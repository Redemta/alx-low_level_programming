#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: char string.
 * @accept: char string.
 * Return: length.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;

	while (*s != '\0')
	{
		char *ptr = accept;

		while (*ptr != '\0')
		{
			if (*s == *ptr)
			{
				length++;
				break;
			}
			ptr++;
		}
		if (*ptr == '\0')
			break;

		s++;
	}
	return (length);
}
