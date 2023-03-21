#include "main.h"

/**
 * main - entry point main
 *
 * Return: Returns 0 always
 *
 *
 */
void print_alphabet(void)
{
	char c;
	
	for (c = 'a'; 'a' <= 'z'; c++)
		_putchar(c);
	_putchar('\n');
}
