#include <string.h>
/**
  *_strchr- function that locates a character in a string
  *@s: string
  *@c: first occurrence of the character
  *Return: result
  */
char *_strchr(char *s, char c)
{
	char *result = strchr(s, c);

	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		return (result);

	}
}
