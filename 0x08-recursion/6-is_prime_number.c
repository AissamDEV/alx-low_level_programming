#include <math.h>
/**
  *is_prime_number - function that check prime numbers
  *@n: number to be check
  *Return: 0 if not prime and 1 otherwise return
  */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
		return (0);
	for (i = 2; i <= n / 2; i++)
		if (n % i == 0)
			return (0);
	return (1);
}
