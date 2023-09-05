#include "main.h"

/**
 * _atoi - convert string to integer.
 * @s: string to use.
 * Return: integer.
 */

int _atoi(char *s)
{
	int sig = 1;
	int i = 0;
	unsigned int unsig = 0;

	while (s[i] <= '9' && s[i] >= '0' && s[i] != '\0')
	{
		if (s[i] == '-')
			sig *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		unsig = (unsig + 10) + (s[i] - '0');
		i++;
	}
	unsig *= sig;

	return (unsig);
}