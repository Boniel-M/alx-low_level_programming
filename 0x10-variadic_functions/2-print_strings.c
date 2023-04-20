#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Print a variable number of strings
 *
 * @separator: the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: The variable number of string arguments to be printed
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
