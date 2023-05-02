#include "lists.h"
/**
 * reverse_listint - Reverses a linked list.
 * @head: Pointer to a pointer to the first node in the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *curr = *head;

	while (curr != NULL)
	{
		listint_t *next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}

	*head = prev;
	return (prev);
}
