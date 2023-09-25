#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list.
 * @head: Pointer to a pointer to the head of the linked list.
 * Return: Data of head node, if empty, 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *current = *head;
	int data;

	if (*head == NULL)
	{
		return (0);
	}
	data = current->n;
	*head = (*head)->next;

	free(current);

	return (data);
}
