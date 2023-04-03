#include <string.h>
/**
  *_memset- function that fills memory with a constant byte
  *@s: pointer
  *@b: constant byte
  *@n:  first byte of of the memory area pointed to by s
  *Return: s
  */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
