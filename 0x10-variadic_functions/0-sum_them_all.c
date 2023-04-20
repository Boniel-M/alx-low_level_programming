#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all -  prints sum of all its parameters
 *
 * @n: number of int to be passed
 *
 * Return: sum of parameters, 0 if n is equal to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	return (sum);

	va_end(ap);
}
