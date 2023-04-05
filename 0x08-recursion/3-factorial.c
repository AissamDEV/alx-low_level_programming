#include <string.h>
/**
  *factorial- function that return
  *the factorial of a given number
  *@n: number to be calucate
  *Return: -1 if n less than 0
  *and fact if more than 0
  */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n-1);
	}
}
