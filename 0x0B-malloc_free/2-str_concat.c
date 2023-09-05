#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: input strin one.
 * @s2: input string two.
 * Return: sum.
 */

char *str_concat(char *s1, char *s2)
{
	int length1 = strlen(s1);
	int length2 = strlen(s2);
	char *sum;

	if (s1 == NULL)
	{
		s1 = "";
	}
	sum = (char *)malloc(length1 + length2 + 1);

	if (sum == NULL)
	{
		return (NULL);
	}
	strcpy(sum, s1);

	strcat(sum, s2);

	return (sum);
}
