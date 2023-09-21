#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to head of the linked list.
 * Return: Number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t ncount = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%lu] %s\n", strlen(h->str), h->str);
		}
		ncount++;
		h =  h->next;
	}
	return (ncount);
}
