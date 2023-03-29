#include "main.h"
#include <stdio.h>
#include <string.h>
/**
  *_strncat - function that concatenates two strings
  *@dest : first pointer
  *@src: second pointer
  *@n: bytes 
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
