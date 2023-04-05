#include <math.h>
#include "main.h"
/**
  *
  *
  *
  *
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
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}
