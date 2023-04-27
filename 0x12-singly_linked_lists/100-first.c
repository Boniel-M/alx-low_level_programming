#include <stdio.h>
#include "lists.h"
/**
 * print_before_main - prints a message before main function is executed
 *
 * Description: This function is called automatically before the main
 * function is executed, and prints a message to the standard
 * output.
 *
 * Return: void
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
