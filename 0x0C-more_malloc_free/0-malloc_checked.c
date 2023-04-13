#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  *
  *
  *
  */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b* sizeof(b));
	return (ptr);
}
