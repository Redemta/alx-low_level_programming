#include "lists.h"

/**
 * listint_len - function that returns no of elements in a linked list.
 * @h: pointer to head of linked list.
 * Return: Number of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t nodCount = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodCount++;
	}
	return (nodCount);
}
