#include <string.h>
/**
  *_strspn- function that gets the length of a prefix substring
  *@s: first pointer
  *@accept: second pointer
  *Return: lengh
  */
unsigned int _strspn(char *s, char *accept)
{
	int lengh;

	lengh = strspn(s, accept);
	return (lengh);
}
