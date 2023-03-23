#include "main.h"
#include <stdio.h>
/**
 * print_line - Draws a straight line of length n using character '_'
 * @n: n is the number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		int i;
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
	}
	putchar('\n');
}
