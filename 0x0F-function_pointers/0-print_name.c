#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name - Prints a given name using a given function
 *
 * @name: The name to be printed
 * @f: A function that takes a string argument and returns void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
