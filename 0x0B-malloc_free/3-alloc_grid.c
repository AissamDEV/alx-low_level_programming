#include <stdio.h>
#include <stdlib.h>
/**
  *alloc_grid - function that returns a pointer to
  *a 2 dimensional array of integers
  *@width: width of grid
  *@height: height of grid
  *Return: NULL if width and height negative
  *and grid overwize
  */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **array = malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = calloc(width, sizeof(int));
		if (array[i] == NULL)
		{
			for (j = i - 1; j >= 0; j--)
			{
				free(array[j]);
			}
			free(array);
			return (NULL);
		}
	}
	return (array);
}
