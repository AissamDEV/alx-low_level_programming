#include "main.h"
#include <stdlib.h>
/**
  **create_array - function that creates
  *an array of chars, and initializes it
  *with a specific char
  *@size: of the array
  *@c: character that initialize the array with
  *Return: NULL if size and ar null and ar overwize
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar = malloc(size * sizeof(char));

	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ar[i] = c;
		}
	}
	return (ar);
}
