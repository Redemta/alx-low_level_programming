#include "lists.h"

/**
 * add_node_end - function to add a new node at the end of a list_t list.
 * @head: pointer to pointer to head of list.
 * @str: pointer to the string to store.
 * Return: Address of new element, NULL if it fails.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode = (list_t *)malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		fprintf(stderr, "Memory allocation failed.\n");
		return (NULL);
	}
	newnode->str = strdup(str);

	if (newnode->str == NULL)
	{
		fprintf(stderr, "String duplication failed.\n");
		free(newnode);

		return (NULL);
	}
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		list_t *start = *head;

		while (start->next != NULL)
		{
			start = start->next;
		}
		start->next = newnode;
	}
	return (newnode);
}
