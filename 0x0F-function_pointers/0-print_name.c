#include <stdio.h>
#include "function_pointers.h"
#include <string.h>
/**
 * print_name - function that prints name
 *
 * @f: function pointer
 * @name: name to be passed to the function pointer
 *
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
