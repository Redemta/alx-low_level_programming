#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: pointer to a pointer to the head of the linked list.
 *
 * Return: Pointer to the first node of reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		current = *head;
		*head = (*head)->next;

		current->next = previous;
		previous = current;
	}
	*head = previous;

	return (*head);
}
