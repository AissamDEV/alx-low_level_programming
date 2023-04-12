#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  **argstostr - that concatenates all the arguments of your program
  *@ac: the number of command-line arguments
  *@av: array of strings containing the arguments
  *Return: NULL if ac == 0 or av == NULL
  *and pointer to a new string, or NULL if it fails
  */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0;
	char *str;

	if (ac <= 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	str = malloc(sizeof(char) * len);
	if (str == NULL)
		return (NULL);

	for (i = 0, j = 0; i < ac; i++)
	{
		strcpy(str + j, av[i]);
		j += strlen(av[i]);
		str[j++] = '\n';
	}
	return (str);
}
