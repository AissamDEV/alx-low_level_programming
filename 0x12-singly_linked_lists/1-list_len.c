#include "lists.h"
/**
  *list_len - function thats return the length of the list
  *
  *@h: the first elements on the list
  *
  *Return: the length of the list
  */
size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
