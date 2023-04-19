#include <stdio.h>
#include "function_pointers.h"

/**
  *print_name - function that prints name
  *@name:a pointer to a character string that represents a person's name
  *@f: function pointer that points to a function that takes
  *a character string as an argument and return void
  */
void print_name(char *name, void (*f)(char *))
{
	(*f)(name);
}
