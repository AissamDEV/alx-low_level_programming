#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
  *malloc_checked - allocates memory using malloc
  *@b: variable
  *Return: ptr
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL){
		exit(98);
	}
	return (ptr);
}
