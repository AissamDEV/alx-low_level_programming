#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *_strncpy-function that copies a string
  *@dest : first pointer
  *@src: second pointer
  *@n: number of bytes
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
