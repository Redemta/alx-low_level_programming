#include "lists.h"

/**
 * add_nodeint_end - function that adds new node at the end of listint_t list.
 * @head: pointer to a pointer to the head of the linked list.
 * @n: value to add to the new node.
 * Return: Address of new element, NULL if it fails.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current;
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;

		return (newNode);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = newNode;

	return (newNode);
}
