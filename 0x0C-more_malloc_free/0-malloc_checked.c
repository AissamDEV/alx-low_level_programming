#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  *malloc_checked - allocates memory using malloc
  *@b: variable
  *Return: ptr
  */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b* sizeof(b));
	return (ptr);
}
