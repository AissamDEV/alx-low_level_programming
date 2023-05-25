#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to measure the length of.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return 0;

	return 1 + _strlen_recursion(s + 1);
}

/**
 * is_palindrome_helper - Helper function for palindrome check.
 * @s: The string to check for palindrome.
 * @start: The starting index of the substring.
 * @end: The ending index of the substring.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return 1;

	if (s[start] == s[end])
		return is_palindrome_helper(s, start + 1, end - 1);

	return 0;
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	return is_palindrome_helper(s, 0, len - 1);
}
