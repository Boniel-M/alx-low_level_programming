#include "main.h"
#include <stdio.h>
/**
 * _isdigit - checks for digit 0 to 9
 * @c: character to check
 * Return: returns value 1 if c is a digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
