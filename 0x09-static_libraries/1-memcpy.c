#include <string.h>
/**
  *_memcpy- function that copies memory area
  *@dest: first memory area
  *@src: second memory area
  *@n: bytes of of the memory area
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
