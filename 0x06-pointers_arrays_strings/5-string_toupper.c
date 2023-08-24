#include "main.h"

/**
 * *string_toupper - function that changes all lowercase letters to uppercase.
 * @str: char to check
 * Return: Always 0.
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		{
		str[a] = str[a] - ('a' - 'A');
		}
		a++;
	}
	return (str);
}
