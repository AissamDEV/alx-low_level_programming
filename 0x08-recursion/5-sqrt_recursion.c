#include <math.h>
#include "main.h"
/**
  *_sqrt_helper - function thats finding sqrt
  *@n: number for which you want to find the square root
  *@c: the current guess for the square root
  *Return: 1 if n is 1 and -1 if n not a real number
  *c if c is the square root of n
  */
int _sqrt_helper(int n, int c)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n == c || n < 0)
	{
		return (-1);
	}
	else if (c * c == n)
	{
		return (c);
	}
	return (_sqrt_helper(n, c + 1));
}
/**
  *_sqrt_recursion - function that returns
  *the natural square root of a number
  *@n: number
  *Return: square root
  */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
