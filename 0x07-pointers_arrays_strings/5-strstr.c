#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string character.
 * @needle: substring character.
 * Return: pointer to the beginning if match found, NULL if not.
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *x = haystack;
		char *y = needle;

		while (*y != '\0' && *haystack == *y)
		{
			haystack++;
			y++;
		}

		if (*y == '\0')
		{
			return (x);
		}
		haystack = x + 1;
	}
	return (NULL);
}
