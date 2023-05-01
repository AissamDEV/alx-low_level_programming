#include "lists.h"
/**
 * free_listint2 - Frees a listint_t linked list and sets the head to NULL.
 * @head: A pointer to a pointer to the head node of the linked list to free.
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *curr = *head;
	listint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}

	*head = NULL;
}
