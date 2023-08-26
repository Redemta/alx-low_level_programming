#include "main.h"

/**
 * *rot13 - function that encodes a string using rot13.
 * @str: pointer to string.
 * Return: str.
 */

char *rot13(char *str)
{
	int i;
	int j;

	char currentChar[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char newChar[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == currentChar[j])
			{
				str[i] = newChar[j];
				break;
			}
		}
	}
	return (str);
}
