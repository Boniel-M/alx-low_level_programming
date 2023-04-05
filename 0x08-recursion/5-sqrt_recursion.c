#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: input number
 * Return: -1 if a number does not have a natural square root
 * @i: potential square root
 */
int helper_sqrt(int n, int i);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
		return (n);
	return (helper_sqrt(n, 1));
}
/**
 * helper_sqrt - finds the natural square root of a number recursively
 *
 * @i: potential square root
 *
 * @n: input number
 *
 * Return: squareroot of n or -1 if erro
 */
int helper_sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (helper_sqrt(n, i + 1));
}
