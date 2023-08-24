#include "main.h"

/**
 * *cap_string - function that capitalizes all words of a string.
 * @str: input string.
 * Return: str.
 */

char *cap_string(char *str)
{
	int j = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (j && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 'a' + 'A';
			j = 0;
		}
		else if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' || str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' || str[i] == '"' ||str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			j = 1;
		}
		else
		{
			j = 0;
		}
		i++;
	}
	return (str);
}
