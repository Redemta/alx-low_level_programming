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
* getLength - helper function for length.
* @s: parameter string.
* Return: 0.
*/

int getLength(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + getLength(s + 1));
}

/**
 * is_palindrome - function that returns 1 if string is palindrome.
 * @s: parameter string.
 * Return: 0.
 */

int is_palindrome(char *s)
{
	int length = 0;

	length = getLength(s);

	return (is_Substring_Palindrome(s, 0, length - 1));
}
