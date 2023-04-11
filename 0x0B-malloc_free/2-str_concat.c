#include <stdlib.h>
#include <string.h>
/**
  *str_concat - function that concatenates two strings
  *@s1: first string
  *@s2: second string
  *Return: NULL if rezult null, result overwize
  */
char *str_concat(char *s1, char *s2)
{
	int s1len;
	int s2len;
	char *result;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1len = strlen(s1);
	s2len = strlen(s2);
	result = malloc(s1len + s2len + 1);

	if (result == NULL)
	{
		return (NULL);
	}

	strcpy(result, s1);
	strcat(result, s2);

	return (result);
}
