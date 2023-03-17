#include <stdio.h>
/**
 * main - This is a function of main.
 * Return: Returns success.
 *
 */

int main(void)
{

	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (i = 10; i < 16; i++)
	{
		putchar(i -10 + 'a');
	}
	putchar('\n');
	return (0);

}
