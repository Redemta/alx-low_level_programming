#include "main.h"

/**
 * *_strcpy - copy string pointed to by src, to buffer pointed to dest
 * @dest: buffer pointer.
 * @src: string pointer.
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = '\0';

	return (dest);
}
