#include "main.h"
/**
 * _strlen_recursion - returns length of a string
 * @s: input string
 *
 * Return: length s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_palindrome_helper - helper function to check if a string is a palindrome
 *
 * @s: input string
 *
 * @start: start index of substring
 * @end: end index of substring
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_helper(s, start + 1, end - 1));
}
/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: input string
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (is_palindrome_helper(s, 0, len - 1));
}
