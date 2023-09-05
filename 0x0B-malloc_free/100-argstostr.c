#include "main.h"

/**
 * argstostr -  function that concatenates all the arguments of your program.
 * @ac: argument count.
 * @av: argument vector.
 * Return: result.
 */

char *argstostr(int ac, char **av)
{
	int length = 0;
	int x = 0;
	char *result;

	if (ac == 0 || av == 0)
	{
		return (NULL);
	}
	while (x < ac)
	{
		length += strlen(av[x]) + 1;
		x++;
	}
	result = (char *)malloc(length + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	result[0] = '\0';
	x = 0;

	while (x < ac)
	{
		strcat(result, av[x]);
		strcat(result, "\n");
		x++;
	}
	return (result);
}
