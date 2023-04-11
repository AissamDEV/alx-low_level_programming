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
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
	return (NULL);
	}
	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = calloc(width, sizeof(int));
		if (grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);
			return (NULL);
		}
	}
		return (grid);
}
