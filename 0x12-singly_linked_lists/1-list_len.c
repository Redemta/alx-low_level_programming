#include "lists.h"

/**
 * list_len - function to return number of elements in a linked list_t list.
 * @h: Head of the list.
 * Return: Number of elements.
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *start = h;

	while (start != NULL)
	{
		count++;
		start = start->next;
	}
	return (count);
}
