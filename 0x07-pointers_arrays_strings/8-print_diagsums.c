#include <stdio.h>
/**
  *print_diagsums- function that prints the sum of
  *the two diagonals of a square matrix of integers
  *@a: pointer to the first element of an array of integers
  *@size: integer representing the number of elements in the array
  */
void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	s1 = 0;
	s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i * size + i];
		s2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", s1, s2);
}
