#include "main.h"

/**
 * _isalpha - check for alphabet characters
 * @c: the character to check
 * Return: 1 for alphabetical character, 0 for otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
