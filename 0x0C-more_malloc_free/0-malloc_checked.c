#include "main.h"

/**
 * malloc_checked - function that allocates memory.
 * @b: no of bytes to allocate.
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		printf("Allocation failed\n");
		exit(98);
	}
	return (ptr);
}
