#include <stdio.h>
/**
  *main - function thats print arguments
  *@argc: argument count
  *@argv:  array of strings that contains
  *the command-line arguments passed
  *to the program when it was executed
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
