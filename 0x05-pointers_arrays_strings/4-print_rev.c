#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints strimg in reverse
 * @s: string to be rev
 *
 * Return: void
 */
void print_rev(char *s)
{
	int a, b;

	b = 0;

	while (s[b] != '\0')
		b++;
	for (a = b - 1; a >= 0; a--)
	{
		putchar(s[a]);
	}
	putchar('\n');
}
