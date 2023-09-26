#include "lists.h"

/**
 * delete_nodeint_at_index - Delete the node at index of listint_t linked list.
 * @head: pointer to the pointer to the head of the list.
 * @index: index of the node to be deleted.
 * Return: 1 if success, -1 if fails.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;

		free(temp);

		return (1);
	}
	current = *head;

	while (current != NULL)
	{
		if (i == index - 1)
		{
			if (current->next == NULL)
			{
				return (-1);
			}
			temp = current->next;

			current->next = current->next->next;

			free(temp);

			return (1);
		}
		i++;
		current = current->next;
	}
	return (-1);
}
