#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
  *main - function that adds positive numbers
  *@argc: argument count
  *@argv: array of strings that contains
  *the command-line arguments passed
  *to the program when it was executed
  *Return: always 0
  */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		int num = atoi(argv[i]);

		if (num == 0 && *argv[i] != '0')
		{
			printf("Error\n");
			return (1);
		}
		if (num > 0)
		{
			sum += num;
		}
	}
	printf("%i\n", sum);

	return (0);
}
