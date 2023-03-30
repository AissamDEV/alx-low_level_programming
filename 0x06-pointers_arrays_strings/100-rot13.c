#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @s: pointer to string to be encoded
 *
 * Return: pointer to encoded string
 */
char *rot13(char *s)
{
	int i, j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *result = s;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; data1[j]; j++)
		{
			if (s[i] == data1[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (result);
}
