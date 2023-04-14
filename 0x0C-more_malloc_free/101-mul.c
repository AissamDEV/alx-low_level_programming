#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - function that multiplies two positive numbers
  *@argc: argument count
  *@argv: array of strings that contains
  *the command-line arguments passed
  *to the program when it was executed
  *Return: 0
  */
int main(int argc, char *argv[])
{
	int i, n1, n2, result;
	char *num1, *num2;

	if (argc != 3)
	{
		fprintf(stderr, "Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	for (i = 0; num1[i] != '\0'; i++)
	{
		if (!isdigit(num1[i]))
		{
			fprintf(stderr, "Error\n");
			return (98);
		}
	}
	for (i = 0; num2[i] != '\0'; i++)
	{
		if (!isdigit(num2[i]))
		{
			fprintf(stderr, "Error\n");
			return (98);
		}
	}
	n1 = atoi(num1);
	n2 = atoi(num2);
	result = n1 * n2;
	printf("%d\n", result);
	return (0);
}
