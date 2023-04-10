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
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
