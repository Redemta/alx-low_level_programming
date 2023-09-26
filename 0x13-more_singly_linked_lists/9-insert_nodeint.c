#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert new node at a given position.
 * @head: pointer to the pointer to the head of the list.
 * @idx: index where new node is added, start from 0.
 * Return: Address of new node, if fails, NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));
	listint_t *current;
	unsigned int i = 0;

	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;

		return (newNode);
	}
	current = *head;

	while (current != NULL)
	{
		if (i == idx - 1)
		{
			newNode->next = current->next;
			current->next = newNode;

			return (newNode);
		}
		i++;
		current = current->next;
	}
	free(newNode);

	return (NULL);
}
