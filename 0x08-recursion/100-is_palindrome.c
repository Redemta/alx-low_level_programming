#include "main.h"

/**
 * is_Substring_Palindrome - helper function.
 * @s: parameter string.
 * @x: start pointer.
 * @y: end pointer.
 * Return: 0.
 */

int is_Substring_Palindrome(char *s, int x, int y)
{
	if (x >= y)
	{
		return (1);
	}
	if (s[x] != s[y])
	{
		return (0);
	}
	return (is_Substring_Palindrome(s, x + 1, y - 1));
}

/**
 * is_palindrome - function that returns 1 if string is palindrome.
 * @s: parameter string.
 * Return: 0.
 */

int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	return (is_Substring_Palindrome(s, 0, length - 1));
}
