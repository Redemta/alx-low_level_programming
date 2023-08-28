#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination pointer.
 * @src: source pointer.
 * @n: number oof bytes.
 * Return: dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	if (dest == NULL || src == NULL)
	{
		return (NULL);
	}

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
