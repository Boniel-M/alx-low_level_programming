#include "main.h"
#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * print_number - Prints an integer to the console
 *
 * @n: integer number to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number / 10;
	}
	_putchar((n % 10) + '0');
}
