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
	int i;
	int len = 0;

	for (i = 0; s[i] != '\0' ; i++)
		len++;
	for (i = len ; i >= 0 ; i--)
		putchar(s[i]);
	putchar('\n');
}
