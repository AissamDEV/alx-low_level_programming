#include <string.h>
/**
  *
  *
  *
  */
int factorial(int n)
{
	int i;
	int fact = 1;

	for (i = 1; i <= n; i++)
	{
		fact *= i;
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (fact);
	}
}
