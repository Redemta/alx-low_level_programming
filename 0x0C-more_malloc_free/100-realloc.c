#include "main.h"

/**
 * _realloc - function that reallocates a memory block.
 * @ptr: pointer to memory.
 * @old_size: zize in bytes of allocated space.
 * @new_size: new size in bytes of new memory block.
 * Return: ptr.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_pointer;
	unsigned int c;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_pointer = malloc(new_size);

	if (new_pointer == NULL)
	{
		return (NULL);
	}
	c = (old_size < new_size) ? old_size : new_size;

	memcpy(new_pointer, ptr, c);

	free(ptr);

	return (new_pointer);
}
