#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers followed by a newline
 *
 * @separator: string to be printed between numbers
 * @n: number of int to be passed to the function
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);
	}
	if (separator != NULL && i != n - 1)
	{
		while (*separator != '\0')
		{
			_putchar(*separator);
			separator++;
		}
	va_end(args);
	_putchar('\n');
	}
}
