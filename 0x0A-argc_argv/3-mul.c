#include <stdio.h>
#include <stdlib.h>
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
	int arg1;
	int arg2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	arg1 = atoi(argv[1]);
	arg2 = atoi(argv[2]);
	printf("%i\n", arg1 * arg2);

	return (0);
}
