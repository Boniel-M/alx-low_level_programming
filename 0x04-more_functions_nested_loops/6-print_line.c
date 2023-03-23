#include "main.h"
#include <stdio.h>
/**
 * print_line - prints a straight line
 * @n: n is the number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		putchar('\n');
	}
	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
