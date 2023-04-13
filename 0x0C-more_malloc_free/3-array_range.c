#include <stdlib.h>
#include "main.h"
/**
  *array_range - function that creates an array of integers
  *@min: refers to the minimum value in a range
  *@max: refers to the maximum value
  *Return: array
  */
int *array_range(int min, int max)
{
	int *array;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= max - min; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
