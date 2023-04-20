#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: list of types of arguments passed to the function
 *
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *s;
	int first_arg = 1;

	va_start(args, format);

	while (format && format[i])
	{
		if (!first_arg)
			printf(", ");

		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				printf("%s", s ? s : "(nil)");
				break;
			default:
				break;
		}
		i++;
		first_arg = 0;
	}
	va_end(args);
	printf("\n");
}
