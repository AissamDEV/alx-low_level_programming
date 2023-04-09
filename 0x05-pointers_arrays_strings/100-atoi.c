#include "main.h"
/**
 * _atoi - function that converts
 *a string to an integer
 * @s: pointer to the string to convert
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;

	if (*s >= '0' && *s <= '9')
	{
		num = num * 10 + (*s - '0');

	if (*(s + 1) < '0' || *(s + 1) > '9')
		break;
	}

	s++;

	}
	return (sign * num);
}
