#include "lists.h"


/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: pointer to the head of linked list.
 * Return: Number of nodes.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodCount = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nodCount++;
		h = h->next;
	}
	return (nodCount);
}
