#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: Pointer to pointer to head of list.
 * @str: pointer to the string to store.
 * Return: New node.
 */

list_t *add_node(list_t **head, const char *str)
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
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
