#include "main.h"
/**
 *print_sign- functions
 *@n:function  parameter
 *Return: 1 if c is a letter, lowercase or uppercase and 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
