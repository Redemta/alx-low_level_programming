#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @n: no of characters to concatenate.
 * @s1: string one.
 * @s2: string two.
 * Return: pointer, if fails return NULL.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int length1 = strlen(s1);
	unsigned int length2 = strlen(s2);
	int finalLength;
	char *result;

	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= length2)
	{
		n = length2;
	}

	finalLength = length1 + n + 1;

	result = (char *)malloc(finalLength);

	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);

	strncat(result, s2, n);

	return (result);
}
