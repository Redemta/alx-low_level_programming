#include "main.h"

/**
 * _calloc - function that allocates memory for an array.
 * @nmemb: number of elements.
 * @size: size of each element.
 * Return: pointer, if nmemb or size is 0 or malloc fails, NULL.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = calloc(nmemb, size);

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
