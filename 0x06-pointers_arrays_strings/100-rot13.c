#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @str: char to check.
 * Return: str.
 */

char *rot13(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		char c = str[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			if (c >= 'A' && c <= 'Z')
			{
				str[i] = (((c - 'A') + 13) % 26) + 'A';
			}
			else
			{
				str[i] = (((c - 'a') + 13) % 26) + 'a';
			}
		}
		i++;
	}
	return (str);
}
