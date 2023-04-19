#include "main.h"
#include <stdio.h>
/**
 * print_name - function that prints name
 *
 * @f: function pointer
 * @name: name to be passed to the function pointer
 *
 * Return: void
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
