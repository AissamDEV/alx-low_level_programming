#include <ctype.h>
/**
  *string_toupper - function that changes all lowercase
  *letters of a string to uppercase
  *@str: string
  *Return: str
  */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}
	return (str);
}
