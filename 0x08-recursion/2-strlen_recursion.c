#include "main.h"
/**
 * _strlen_recursion(char *s) - prints length of a string recursively
 * @s: string to determine length
 *
 * Return: 0 length of a string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
