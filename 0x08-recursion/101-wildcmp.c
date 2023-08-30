#include "main.h"

/**
 * wildcard - helper function.
 * @s1: string one.
 * @s2: string two.
 * Return: 0.
 */

int wildcard(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == '\0' || *s2 == '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcard(s1, s2 + 1));
		}
		if (wildcard(s1, s2 + 1) || wildcard(s1 + 1, s2))
		{
			return (1);
		}
	}
	if (*s1 != *s2)
	{
		return (0);
	}
	return (wildcard(s1 + 1, s2 + 1));
}

/**
 * wildcmp - function that compares two strings.
 * @s1: string one.
 * @s2: string two.
 * Return: 1 if identical, 0 if otherwise.
 */

int wildcmp(char *s1, char *s2)
{
	return (wildcard(s1, s2));
}
