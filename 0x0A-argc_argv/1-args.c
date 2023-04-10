#include <stdio.h>
/**
  *main - function that prints the number
  *of arguments passed into it
  *@argc: argument count
  *@argv: array of strings that contains
  *the command-line arguments passed
  *to the program when it was executed
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	if (argv == 0)
		return (0);
	printf("%i\n", argc - 1);
	return (0);
}
