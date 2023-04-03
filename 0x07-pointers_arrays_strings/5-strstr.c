#include <string.h>
/**
  *_strstr- function that locates a substring
  *@haystack: refers to the string in which
  *you want to search for a substring
  *@needle:refers to the substring that
  *you want to find within the haystack string
  *Return: st
  */
char *_strstr(char *haystack, char *needle)
{
	char *st;

	st = strstr(haystack, needle);
	if (st == NULL)
	{
		return (NULL);
	}
	else
	{
		return (st);
	}
}
