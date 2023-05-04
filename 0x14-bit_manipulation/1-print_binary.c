#include "main.h"
/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: the number to print in binary form.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
			putchar('0');

		mask >>= 1;
	}

	if (!printed)
		putchar('0');
}

