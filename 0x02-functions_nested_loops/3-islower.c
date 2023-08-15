#include "main.h"
#include <ctype.h>

/**
 * int _islower(int c) - lowercase character.
 *
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
