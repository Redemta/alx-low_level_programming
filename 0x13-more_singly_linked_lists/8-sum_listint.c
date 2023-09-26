#include "lists.h"

/**
 * sum_listint - function to return sum of all data of listint_t linked list.
 * @head: The first node in the linked list.
 * Return: sum of all data, if empty, 0.
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
