#include <string.h>
#include <stdlib.h>
/**
  **_strdup - that returns a pointer to
  *a newly allocated space in memory
  *@str: string
  *Return: NULL if str or str1 = NULL str1 overwize
  */
char *_strdup(char *str)
{
	char *str1;

	if (str == NULL)
	{
		return (NULL);
	}

	str1 = malloc(strlen(str) + 1);

	if (str1 == NULL)
	{
		return (NULL);
	}
	strcpy(str1, str);
	return (str1);
}
