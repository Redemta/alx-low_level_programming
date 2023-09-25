#include "lists.h"

/**
 * free_listint - function that frees a listint_t list.
 * @head: Pointer to the head of the linked list.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;

		free(current);
	}
}
