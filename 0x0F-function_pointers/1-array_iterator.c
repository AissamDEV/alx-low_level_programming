#include "function_pointers.h"
/**
  *array_iterator - function that executes a function given
  *as a parameter on each element of an array
  *@array: pointer to the integer array that we want to iterate over
  *@size: integer representing the size of the array
  *@action: pointer to a function that takes an integer as an argument
  *and returns nothing
  */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	int *ptr = array + size - 1;

	if (array && size && action)
	{
		while (array <= ptr)
		{
			action(*array++);
		}
	}
}
