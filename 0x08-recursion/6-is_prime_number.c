#include <math.h>
/**
  *is_divisible - helper function to check
  *		if a number is divisible by any
  *@n: the number to check for divisibility
  *@i: the integer to check divisibility
  *Return: 1 if the number is divisible by i, 0 otherwise
  */
int is_divisible(int n, int i)
{
	if (i == 1)
		return (0);
	else if (n % i == 0)
		return (1);
	else
		return (is_divisible(n, i - 1));
}
/**
  *is_prime_number - function that check prime numbers
  *@n: number to be check
  *Return: 0 if not prime and 1 otherwise return
  */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (!is_divisible(n, n - 1));
}
