#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string to be compared.
 * @s2: string to be compared.
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
	if (*s1 != *s2)
	{
		return ((int)(*s1) - (int)(*s2));
	}
	s1++;
	s2++;
	}
	return ((int)(*s1) - (int)(*s2));
}
