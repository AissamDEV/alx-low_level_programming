#include <string.h>
/**
  *_strpbrk- function that searches 
  *a string for any of a set of bytes
  *@s: first pointer 
  *@accept: second pointer
  *Return: sr
  */
char *_strpbrk(char *s, char *accept)
{
	char *sr;

	sr = strpbrk(s, accept);
	if (sr == NULL)
	{
		return (NULL);
	}
	else
	{
		return (sr);
	}
}
