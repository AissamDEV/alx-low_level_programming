#include <stdlib.h>
/**
  *calloc - function that allocates memory
  *for an array, using malloc
  *@nmemb: is unsigned integer that specifies
  *the number of elements to allocate
  *@size: is unsigned integer and specifies
  *the size of each element in bytes
  *Return: ptr
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		*((char*)ptr + i) = 0;
	}
	return (ptr);
}
