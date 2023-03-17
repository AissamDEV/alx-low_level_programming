#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 97;
	int n2 = 65;

	while (n <= 122)
	{
		putchar (n);
		n++;
	}
	while (n2 <= 90)
	{
		putchar (n2);
		n2++;
	}
	putchar ('\n');
	return (0);
}
