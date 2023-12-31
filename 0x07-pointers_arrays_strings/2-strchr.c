#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to string.
 * @c: character to locate.
 * Return: s or NULL if character not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
