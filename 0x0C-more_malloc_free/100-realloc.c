#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
  **_realloc - function that reallocates a memory
  *@ptr: pointer
  *@old_size: old memory size
  *@new_size: new memory size
  *Return: new ptr
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}
	copy_size = old_size < new_size ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}