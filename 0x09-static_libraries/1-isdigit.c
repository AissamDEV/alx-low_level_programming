#include "main.h"
/**
 *_isdigit- function
 *@c: letter
 *Return: 1 if c is digit
 * and 0 if c otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
