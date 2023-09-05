#include "main.h"

/**
 * _strdup - return a pointer to a newly allocated space in memory.
 * @str: string parameter.
 * Return: copy.
 */

char *_strdup(char *str)
{
	int i = 0;
	int length = 0;
	char *c;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[length] != '\0')
	{
		length++;
	}
	c = (char *)malloc((length + 1) * sizeof(char));

	if (c == NULL)
	{
		return (NULL);
	}
	while (i <= length)
	{
		c[i] = str[i];
		i++;
	}
	return (c);
}
