#include "main.h"

/**
 * _islower - lowercase character.
 * @c: the character to check
 * Return: 1 if lowercase and 0 for anything else.
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
