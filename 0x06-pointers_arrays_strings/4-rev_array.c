#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *reverse_array- function that compares two strings
  *@a: an array of integers
  *@n: the number of elements to swap
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	for (; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
