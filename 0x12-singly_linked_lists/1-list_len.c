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
	size_t len = 0;
	const list_t *t = h;

	while (t != NULL)
	{
		len++;
		t = t->next;
	}
	return (len);
}
