#include "main.h"

/**
 * main - prints and checks alphabetical code
 *
 * Return: Returns 0 always.
 *
 *
 */

{
	char c;
	c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}
