#include "lists.h"

/**
 * get_nodeint_at_index - Return the nth node of a listint_t linked list.
 * @head:  A pointer to the head of the listint_t linked list.
 * @index: index of the node to retrieve, indexing starting at 0.
 * Return: nth node if it exists or NULL if the node does not exist.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *currentNode = head;

	while (currentNode != NULL && index > 0)
	{
		currentNode = currentNode->next;
		index--;
	}
	return ((index == 0) ? currentNode : NULL);
}
