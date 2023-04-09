#include <stdio.h>
#include <string.h>
#include "main.h"
/**
  *_atio - function thats convert a string
  *to an integer
  *@s: pointer to the string to convert
  *Return: the converted int
  */
int _atio(char *s)
{
	int a, b, c, d, length, digit;

	a = 0;
	b = 0;
	c = 0;
	d = 0;
	length = 0;
	digit = 0;

	while (s[length] != '\0')
		length++;
	while (a < length && d == 0)
	{
		if (s[a] == '.')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			d = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			d = 0;
		}
		a++;
	}
	if (d == 0)
		return (0);
	return (c);
}
