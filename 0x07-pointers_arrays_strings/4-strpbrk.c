#include "main.h"

/**
 * _strpbrk - function that searches a string for any set of bytes.
 * @s: char string.
 * @accept: char string.
 * Return: s if matching character found, NULL if not.
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*a == *s)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
