#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a linked list.
 *
 * @head: A pointer to the head of the linked list.
 * @str: The string to add to the linked list.
 *
 * Return: If successful - A pointer to the new node.
 *         Otherwise - NULL.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(Node));

	if (new == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);

	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->next = *head;
	*head = new_node;
	return (newNode);
}
